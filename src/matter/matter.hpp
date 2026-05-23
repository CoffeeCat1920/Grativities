#pragma once
#include "quantities/quantities.hpp"
#include <raylib.h>

struct Matter {
  quantities::Mass mass = 0;
  Vector2 position = Vector2{0.0f, 0.0f};
};
