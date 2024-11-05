#pragma once

class Grid
{
public:
    Grid();
    void Initialize();
    int grid[20][10];
    void Print();
private:
    int numRows;
    int numCols;
    int cellSize;
};