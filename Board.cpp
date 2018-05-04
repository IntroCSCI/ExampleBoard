#include "Board.h"

Board::Board()
{

}

std::vector< std::vector<char> > Board::getWholeBoard()
{
  return grid;
}

void Board::setSize(int row, int column)
{
  grid.resize(row);
  for(int i=0; i<grid.size(); i++)
  {
    grid[i].resize(column);
  }
}

void Board::fillWith(char value)
{
  for(int row=0; row<grid.size(); row++)
  {
    for(int column= 0; column<grid[row].size(); column++)
    {
       grid[row][column] = value;
    }
  }
}
