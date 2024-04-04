#include <raylib.h>
#include "grid.h"

int main()
{
    Color lightBlue{91, 188, 175, 28};
    InitWindow(550, 777, "Hanif's Tetris Experiment");
    SetTargetFPS(60);
    Grid grid;
    grid.Draw();
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(lightBlue);
        grid.setBlockColor();
        EndDrawing();
    }
    CloseWindow();
}