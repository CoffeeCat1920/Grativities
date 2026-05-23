#include "game.hpp"
#include "physicsSystem/physics.hpp"
#include <raylib.h>

Game::Game() {}

void Game::Init() {
  PhysicsSystem::Init();
  this->body = PhysicsSystem::GetBody(
      {GetScreenWidth() / 2.0f, GetScreenHeight() / 2.0f}, 5, {0, 0}, {0, 1});
}
void Game::Update() { PhysicsSystem::Update(body); }
void Game::Draw() {
  DrawCircle(PhysicsSystem::positions[body].x, PhysicsSystem::positions[body].y,
             5.0f, RED);
}
