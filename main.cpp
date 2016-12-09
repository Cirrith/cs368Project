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

#include"game.hpp"

using std::cout;
using std::cin;
using std::endl;

void getValues(int* val) {
	cout << "Enter Row" << endl;
	cin >> val[0];
	cout << "Enter Column" << endl;
	cin >> val[1];
}

int main() {
  int num[2];
  
  Game game;
  
  cout << "Welcome to Ultimate TicTacToe" << endl;
  cout << "Player 1 will be X and Player 2 will be O" << endl;
  
  cout << "How to play: Taking turns players will lay down their marker in cells" << endl;
  cout << "Cells are indexed by using x: 0-2, y: 0-2 from the top left" << endl;
  cout << "Where the previous player plays dictates where the next player must player" << endl;
  
  game.printWholeBoard();

  cout << "To get started: Player 1 enter the cell you want to start on" << endl;
  
  getValues(num);
  
  game.setCurBoard(num[0], num[1]);  // Get game started
  
  while(!game.isFinished()) {
    cout << "Whole Board" << endl;
    game.printWholeBoard();
    if(game.curWon()) {
      cout << "The current board is won, choose a new one" << endl;
      getValues(num);
      game.setCurBoard(num[0], num[1]);
    }
    cout << endl << "Current Board" << endl;
    game.printCurBoard();
    
    cout << "Where do you want to go?" << endl;
    cout << "Player: " << game.getCurPlayer() << endl;
    
    getValues(num);
    
    game.setPos(num[0], num[1]);
    
    game.next();
  }
}
