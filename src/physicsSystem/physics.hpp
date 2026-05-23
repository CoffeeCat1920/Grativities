#pragma once

#include "quantities/quantities.hpp"
#include <array>
#include <cstdint>
#include <raylib.h>
#include <stack>

namespace PhysicsSystem {

using Body = uint8_t;
inline std::stack<Body> ids;
inline constexpr Body MAX_BODIES = UINT8_MAX;
inline Body currentAlive = 0;

inline std::array<quantities::Mass, UINT16_MAX> masses;
inline std::array<quantities::Position, UINT16_MAX> positions;
inline std::array<quantities::Accelaration, UINT16_MAX> accs;
inline std::array<quantities::Velocity, UINT16_MAX> velocities;

void Init();

int GetBody(quantities::Position position, quantities::Mass mass,
            quantities::Velocity, quantities::Accelaration);

void Update(Body body);
}; // namespace PhysicsSystem
