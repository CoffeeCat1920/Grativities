#pragma once
#include "physicsSystem/physics.hpp"

class Game {

private:
  PhysicsSystem::Body body;

public:
  Game();

  void Init();
  void Update();
  void Draw();
};
