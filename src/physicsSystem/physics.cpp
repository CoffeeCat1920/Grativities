#include "physics.hpp"
#include "quantities/quantities.hpp"
#include <cstdint>
#include <iostream>

void PhysicsSystem::Init() {
  for (int i = 0; i < UINT8_MAX; i++) {
    ids.push(i);
  }
}

int PhysicsSystem::GetBody(quantities::Position position, quantities::Mass mass,
                           quantities::Velocity velocity,
                           quantities::Accelaration accelaration) {
  if (currentAlive >= MAX_BODIES) {
    std::cout << "Max Entities Reached";
    return 0;
  }

  Body body = ids.top();
  ids.pop();

  positions[body] = position;
  masses[body] = mass;
  accs[body] = accelaration;
  velocities[body] = velocity;

  std::cout << "Mass:" << masses[body] << "\n"
            << "Velocity:" << velocities[body].x << ", " << velocities[body].y
            << "\n"
            << "Accelaration:" << accs[body].x << ", " << accs[body].y << "\n";

  return body;
}

void PhysicsSystem::Update(Body body) {
  velocities[body] += accs[body] * GetFrameTime();
  positions[body] += velocities[body];
}
