#include <raylib.h>
#include "game.h"

int main() 
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "\033[40mTetris cpp\033[0m"); // Set title bar background to black
    SetTargetFPS(60);

    Game game = Game();

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}