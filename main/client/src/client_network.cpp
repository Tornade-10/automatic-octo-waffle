#include "client_network.h"

NetworkManager::NetworkManager() {
  socket.setBlocking(false);
}

bool NetworkManager::connectToServer(const std::string& ip, unsigned short port) {
  if (socket.connect(ip, port) == sf::Socket::Status::Done) {
    connected = true;
  }
  return connected;
}

void NetworkManager::sendInput(const sf::Vector2f& inputDirection) {
  if (!connected) return;

  float data[2] = {inputDirection.x, inputDirection.y};
  socket.send(data, sizeof(data));
}

std::vector<sf::Vector2f> NetworkManager::receiveGameState() {
  std::vector<sf::Vector2f> playerPositions;

  if (!connected) return playerPositions;

  std::vector<char> buffer(1024);
  std::size_t received;

  if (socket.receive(buffer.data(), buffer.size(), received) == sf::Socket::Done) {
    std::size_t count = received / (sizeof(float) * 2);
    const float* data = reinterpret_cast<const float*>(buffer.data());

    for (std::size_t i = 0; i < count; ++i) {
      playerPositions.emplace_back(data[i*2], data[i*2+1]);
    }
  }

  return playerPositions;
}
