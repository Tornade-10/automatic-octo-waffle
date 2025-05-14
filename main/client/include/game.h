#ifndef SIMPLECHAT_MAIN_CLIENT_INCLUDE_GAME_H_
#define SIMPLECHAT_MAIN_CLIENT_INCLUDE_GAME_H_

#include "physics_world.h"
#include "player_character.h"
#include "SFML/Graphics/CircleShape.hpp"
#include "SFML/Graphics/RectangleShape.hpp"

namespace client {

/**
 * Takes care of the physics game
 * Ref to physics world
 * Terrain
 * Characters
 */
class Game {
 private:
  crackitos_physics::physics::PhysicsWorld& physics_world_;

  std::array<PlayerCharacter, 2> players_{};

 public:

  Game(crackitos_physics::physics::PhysicsWorld& physics_world);

  void Init();

  void Update();

  void FixedUpdate();

};

}

#endif //SIMPLECHAT_MAIN_CLIENT_INCLUDE_GAME_H_
