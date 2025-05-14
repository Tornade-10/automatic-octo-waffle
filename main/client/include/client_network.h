#ifndef SIMPLECHAT_MAIN_CLIENT_INCLUDE_CLIENT_NETWORK_H_
#define SIMPLECHAT_MAIN_CLIENT_INCLUDE_CLIENT_NETWORK_H_

#include <SFML/Network.hpp>
#include <vector>
#include <SFML/System/Vector2.hpp>


/**
 * Connect to server
 * Send/Receive Package
 */
class NetworkManager {
 public:
  NetworkManager();
  bool connectToServer(const std::string& ip, unsigned short port);
  void sendInput(const sf::Vector2f& inputDirection);
  std::vector<sf::Vector2f> receiveGameState();

 private:
  sf::TcpSocket socket;
  bool connected = false;
};

#endif //SIMPLECHAT_MAIN_CLIENT_INCLUDE_CLIENT_NETWORK_H_