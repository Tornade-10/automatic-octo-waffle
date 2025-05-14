#ifndef SIMPLECHAT_MAIN_CLIENT_INCLUDE_GAME_MANAGER_H_
#define SIMPLECHAT_MAIN_CLIENT_INCLUDE_GAME_MANAGER_H_

#include "timer.h"

#include "display.h"
#include "game.h"
#include "input_manager.h"

namespace client {

/**
 * Manage All Local
 * Connect Local
 */
class GameManager {
 private:
  crackitos_core::timer::Timer timer_;

  unsigned short int _windowSizeX;
  unsigned short int _windowSizeY;
  bool _isRightWall;

  // Example: a simple test shape just to make sure drawing works
  sf::RectangleShape _testRect;

 public:
  GameManager(unsigned short int windowSizeX, unsigned short int windowSizeY, bool isRightWall);

  void Init();                 // replaces Initialize()
  void Update();              // handles input, frame-level logic
  void FixedUpdate();         // consistent physics/game logic
  void Draw(sf::RenderWindow& window); // rendering
  void Deinit();              // replaces ShutDownGame()
};

} // client

#endif //SIMPLECHAT_MAIN_CLIENT_INCLUDE_GAME_MANAGER_H_
