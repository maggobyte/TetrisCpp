#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    Grid grid;
    Block GetRandomBlock();

private:
    std::vector<Block> blocks;
};