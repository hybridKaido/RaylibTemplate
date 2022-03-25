#include "raylib.h"


int x = 400, y = 225, radius = 100;
unsigned char colorIndex = 0;
int const FPS = 0;

void draw()
{
  BeginDrawing();
    ClearBackground(BLANK);
    DrawCircle(x, y, radius, {(unsigned char)GetRandomValue(0, 255), (unsigned char)GetRandomValue(0, 255), (unsigned char)GetRandomValue(0, 255), 255});
  EndDrawing();
}

int main(void)
{
  InitWindow(800, 450, "Minimal Raylib Setup");
  SetTargetFPS(FPS);
  while (!WindowShouldClose())
  {
    draw();
  }

    CloseWindow();

    return 0;
}
