#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    void Draw();
    bool gameOver;
    int score;
    void HandleInput();
    void MoveBlockDown();

private:
    Grid grid;
    std::vector<Block> blocks;
    std::vector<Block> GetAllBlocks();
    Block currentBlock;
    Block nextBlock;
    Block GetRandomBlock();
    bool IsBlockOutside();
    bool BlockFits();
    void MoveBlockLeft();
    void MoveBlockRight();
    void RotateBlock();
    void LockBlock();
    void Reset();
    void UpdateScore(int linesCleared, int moveDownPoints);
};