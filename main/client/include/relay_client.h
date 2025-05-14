#ifndef SIMPLECHAT_MAIN_CLIENT_INCLUDE_RELAY_CLIENT_H_
#define SIMPLECHAT_MAIN_CLIENT_INCLUDE_RELAY_CLIENT_H_

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "client_network.h"
#include <imgui-SFML.h>
#include <imgui.h>
#include "const.h"

namespace client {

class RelayClient {
 public:
  RelayClient();
  void run();

 private:
  void ProcessEvents();
  void Update();
  void Render();

  sf::RenderWindow window_;
  sf::Clock deltaClock_;

  NetworkManager network_;

  // Example of received game data
  struct PlayerState {
    sf::Vector2f position;
  };
  std::vector<PlayerState> players;

  // Input state
  sf::Vector2f inputDirection;
};

} // client

#endif //SIMPLECHAT_MAIN_CLIENT_INCLUDE_RELAY_CLIENT_H_
