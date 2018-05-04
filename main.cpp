#include <iostream>
#include "Board.h"
#include <vector>

using namespace std;

int main()
{
  Board ticTacToe;
  vector< vector<char> > gameBoard;

  ticTacToe.setSize(3,3);
  ticTacToe.fillWith('X');

  gameBoard = ticTacToe.getWholeBoard();

  for(int row=0; row < gameBoard.size(); row++)
  {
    for(int column=0; column < gameBoard[row].size(); column++)
    {
      cout<<gameBoard[row][column]<<" ";
    }
    cout<<endl;
  }


  return 0;
}
