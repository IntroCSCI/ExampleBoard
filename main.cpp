#include <iostream>
#include "Board.h"

using namespace std;

int main()
{
  Board ticTacToe;

  ticTacToe.setSize(3,3);
  ticTacToe.fillWith('X');

  return 0;
}
