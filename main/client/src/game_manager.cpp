#include "game_manager.h"

namespace client {

GameManager::GameManager(unsigned short int windowSizeX, unsigned short int windowSizeY, bool isRightWall)
    : _windowSizeX(windowSizeX), _windowSizeY(windowSizeY), _isRightWall(isRightWall) {}


void GameManager::Init() {
  // Set up a test rectangle
  _testRect.setSize(sf::Vector2f(60.0f, 20.0f));
  _testRect.setFillColor(sf::Color::Green);
  _testRect.setPosition(_windowSizeX / 2.0f - 30.0f, _windowSizeY / 2.0f - 10.0f);
}

void GameManager::Update() {
  // Move rectangle up/down with keyboard (per-frame logic)
  float speed = 200.0f; // pixels per second
  float deltaTime = 1.0f / 60.0f; // if you're not calculating it elsewhere

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
    _testRect.move(0, -speed * deltaTime);
  } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
    _testRect.move(0, speed * deltaTime);
  }
}

void GameManager::Draw(sf::RenderWindow &window) {
  window.draw(_testRect);
}

} // client