#pragma once
#include <vector>
#include <raylib.h>

class Grid
{
public:
    Grid();
    void Initialize();
    void Draw();
    void setBlockColor();
    int grid[20][10];

private:
    int numRows;
    int numCols;
    int celsize;
    std::vector<Color> colors;
    std::vector<Color> getCellColor();
};