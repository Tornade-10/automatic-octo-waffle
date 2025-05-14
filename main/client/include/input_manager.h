#ifndef SIMPLECHAT_MAIN_CLIENT_INCLUDE_INPUT_MANAGER_H_
#define SIMPLECHAT_MAIN_CLIENT_INCLUDE_INPUT_MANAGER_H_

#include <SFML/Window/Keyboard.hpp>
#include <SFML/System/Vector2.hpp>

namespace client {

/**
 * Manage local inputs
 */
class InputManager {
 public:
  void update(); // call this once per frame

  sf::Vector2f getMoveDirection() const; // WASD direction
  bool isJumpPressed() const;            // Space key

 private:
  sf::Vector2f moveDirection{};
  bool jumpPressed = false;
};

}

#endif // SIMPLECHAT_MAIN_CLIENT_INCLUDE_INPUT_MANAGER_H_0