#include "game.h"


namespace client {

void Game::Init() {

  crackitos_core::math::AABB BigSquare(crackitos_core::math::Vec2f(0.0f, 0.0f), crackitos_core::math::Vec2f(800.0f, 800.0f));
  physics_world_.Initialize(BigSquare, false, {0.0f, 981.0f});

  crackitos_core::math::Vec2f position(40.0f, 40.0f);

    crackitos_physics::physics::Body body_def(
      crackitos_physics::physics::BodyType::Dynamic,
      position,
      crackitos_core::math::Vec2f::Zero(),
      true,
      1.0f);
  players_[0].body_handle_ = physics_world_.CreateBody(body_def);

  //crackitos_core::math::Vec2f(16, 32)); // character box
  crackitos_core::math::AABB aabb(
      crackitos_core::math::Vec2f(position.x - 8, position.y - 16),
      crackitos_core::math::Vec2f(position.x + 8, position.y + 16)
  );

  crackitos_physics::physics::Collider collider_def(aabb, 0.0f, 0.0f, false, players_[0].body_handle_);
  players_[0].collider_handle_ = physics_world_.CreateCollider(players_[0].body_handle_, collider_def);
}

void Game::Update() {

}

void Game::FixedUpdate() {
  physics_world_.Update();

}

Game::Game(crackitos_physics::physics::PhysicsWorld& physics_world) : physics_world_(physics_world) {

}

}