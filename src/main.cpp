#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main() 
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "\033[40mTetris cpp\033[0m"); // Set title bar background to black
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    IBlock block = IBlock();

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        block.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}