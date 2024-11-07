#pragma once
#include <vector>
#include <raylib.h>

class Grid
{
public:
    Grid();
    void Initialize();
    int grid[20][10];
    void Print();
    void Draw();
    bool IsCellOutside(int row, int column);
    bool isCellEmpty(int row, int column);

private:
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};