#pragma once

using Real = double;

struct Vec2 {
  Real x, y;

  Vec2 operator+(const Vec2 &other) const { return {x + other.x, y + other.y}; }

  Vec2 operator-(const Vec2 &other) const { return {x - other.x, y - other.y}; }

  Vec2 operator*(Real scalar) const { return {x * scalar, y * scalar}; }

  Vec2 operator/(Real scalar) const { return {x / scalar, y / scalar}; }

  Vec2 &operator+=(const Vec2 &other) {
    x += other.x;
    y += other.y;
    return *this;
  }

  Vec2 &operator-=(const Vec2 &other) {
    x -= other.x;
    y -= other.y;
    return *this;
  }

  Vec2 &operator*=(Real scalar) {
    x *= scalar;
    y *= scalar;
    return *this;
  }

  Vec2 &operator/=(Real scalar) {
    x /= scalar;
    y /= scalar;
    return *this;
  }
};

namespace quantities {

using Mass = Real;

using Force = Vec2;
using Velocity = Vec2;
using Accelaration = Vec2;
using Position = Vec2;

} // namespace quantities
