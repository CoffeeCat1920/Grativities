#include "core/colors.hpp"
#include "core/settings.hpp"
#include "game/game.hpp"
#include <raylib.h>

int main() {

  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Animation Test");
  Game game;

  game.Init();

  while (!WindowShouldClose()) {

    game.Update();

    BeginDrawing();

    ClearBackground(GRUVBOX_DARK0);

    game.Draw();

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
