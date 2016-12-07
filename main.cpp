/*/////////////////////////////////////////////////////////////////////////////
//
// FILENAME: board.hpp
//
// DESCRIPTION:
//  Provides template for board of tic tac toe
//  Two primary templates are defined
//      class TTTBoard<T> 
//      class TTTBoard<TTTBoard<T>>
//  Data is stored in vector
//
// PUBILC FUNCTIONS:
//  TTTBoard<T>:
//      TTTBoard();
//      TTTBoard(T init);
//      T getPos(int x, int y);
//      void setPos(int x, int y, T val);
//      bool checkWin(T player);
//      void printBoard();
//
//  TTTBoard<TTTBoard<T>>:
//      TTTBoard(T init);
//      TTTBoard<T> getPos(int x, int y);
//      void setPos(int x, int y, TTTBoard<T> val);
//      bool checkWin();
//      void printBoard();
//
// NOTES:
//
/////////////////////////////////////////////////////////////////////////////*/

#include"board.hpp"

using std::cout;
using std::endl;

int main() {
    TTTBoard<TTTBoard<char>> board('O', 'X');
    board.printBoard();

    cout << endl;
    cout << "------------------------" << endl;
    cout << endl;

    for (int gRow = 0; gRow < 3; gRow++) {
      for (int gCol = 0; gCol < 3; gCol++) {
        TTTBoard<char> &local = board.getPos(gRow, gCol);
        for (int lRow = 0; lRow < 3; lRow++) {
          for (int lCol = 0; lCol < 3; lCol++) {
            local.setPos(lRow, lCol, 'X');
          }
        }
      }
    }

    board.printBoard();
}
