#include "relay_client.h"

namespace client {

RelayClient::RelayClient()
    : window_(sf::VideoMode(), "Relay Client")
{
  window_.setFramerateLimit(60);
  ImGui::SFML::Init(window_);

  network_.connectToServer("127.0.0.1", 54000);
}

void RelayClient::run() {
  while (window_.isOpen()) {
    ProcessEvents();
    Update();
    Render();
  }

  ImGui::SFML::Shutdown();
}

void RelayClient::ProcessEvents() {
  sf::Event event;
  while (window_.pollEvent(event)) {
    ImGui::SFML::ProcessEvent(window_, event);

    if (event.type == sf::Event::Closed) {
      window_.close();
    }
  }
}

void RelayClient::Update() {
  ImGui::SFML::Update(window_, deltaClock_.restart());

  inputDirection = {0.f, 0.f};

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) inputDirection.y -= 1.f;
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) inputDirection.y += 1.f;
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) inputDirection.x -= 1.f;
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) inputDirection.x += 1.f;

  // Send input to server
  network_.sendInput(inputDirection);

  // Receive game state
  players = network_.receiveGameState();
}

void RelayClient::Render() {
  window_.clear();

  ImGui::Begin("Debug Info");
  ImGui::Text("Players Connected: %d", static_cast<int>(players.size()));
  ImGui::End();

  // Draw players
  for (const auto& player : players) {
    sf::CircleShape shape(10.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(player.position);
    window_.draw(shape);
  }

  ImGui::SFML::Render(window_);
  window_.display();
}

} // client