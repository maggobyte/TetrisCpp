#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    ~Game();
    void Draw();
    bool gameOver;
    int score;
    void HandleInput();
    void MoveBlockDown();
    Music music;

private:
    Grid grid;
    std::vector<Block> blocks;
    std::vector<Block> GetAllBlocks();
    Block currentBlock;
    Block nextBlock;
    Block GetRandomBlock();
    Sound clearSound;
    Sound rotateSound;
    bool IsBlockOutside();
    bool BlockFits();
    void MoveBlockLeft();
    void MoveBlockRight();
    void RotateBlock();
    void LockBlock();
    void Reset();
    void UpdateScore(int linesCleared, int moveDownPoints);
};