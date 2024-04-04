#include <iostream>
#include "grid.h"

Grid::Grid()
{
    numRows = 20;
    numCols = 10;
    celsize = 30;
    Initialize();
    colors = getCellColor();
}
void Grid::Initialize()
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            grid[i][j] = 0;
        }
    }
}

void Grid::Draw()
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<Color> Grid::getCellColor()
{
    Color green = {32, 176, 75, 255};
    Color blue = {97, 76, 228, 255};
    Color red = {228, 8, 10, 255};
    Color yellow = {228, 228, 10, 255};
    Color orange = {228, 126, 10, 255};
    Color purple = {128, 10, 228, 255};
    Color cyan = {10, 228, 228, 255};
    Color pink = {228, 10, 228, 255};

    return {green, blue, red, yellow, orange, purple, cyan, pink};
}

void Grid::setBlockColor()
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            int cellValue = grid[i][j];
            DrawRectangle(j * celsize, i * celsize, celsize, celsize, colors[cellValue]);
        }
    }
}