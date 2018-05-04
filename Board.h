#ifndef _BOARD_H_
#define _BOARD_H_
#include <vector>

class Board
{
  private:
  std::vector < std::vector<char> > grid;

  public:
  Board();
  void setSize(int,int);
  void fillWith(char);
  std::vector < std::vector<char> > getWholeBoard();
//  void assign(char,int,int);
//  char get(int,int);

};

#endif //End of ifndef _BOARD_H_
