#ifndef SIMPLECHAT_MAIN_CLIENT_INCLUDE_PLAYER_CHARACTER_H_
#define SIMPLECHAT_MAIN_CLIENT_INCLUDE_PLAYER_CHARACTER_H_

#include "body.h"
#include "collider.h"


namespace client {

struct PlayerCharacter {

  int id_ = 0;
  crackitos_physics::physics::BodyHandle body_handle_;
  crackitos_physics::physics::ColliderHandle collider_handle_;
};

} // client

#endif //SIMPLECHAT_MAIN_CLIENT_INCLUDE_PLAYER_CHARACTER_H_
