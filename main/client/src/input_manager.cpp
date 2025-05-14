#include "input_manager.h"

namespace client {

void InputManager::update() {
  moveDirection = {0.f, 0.f};
  jumpPressed = false;

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) moveDirection.y -= 1.f;
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) moveDirection.y += 1.f;
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) moveDirection.x -= 1.f;
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) moveDirection.x += 1.f;

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space)) jumpPressed = true;
}

sf::Vector2f InputManager::getMoveDirection() const {
  return moveDirection;
}

bool InputManager::isJumpPressed() const {
  return jumpPressed;
}

}
