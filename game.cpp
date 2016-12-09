#include "game.hpp"

class game {
  private:
    char players[2];
    char curPlayer;
    board<board<char>> board;
    int curBoard[2];
    int nextBoard[2];
    bool finished;

  public:
    game();
    bool isFinished();
    char getCurPlayer();
    char next();
    void printWholeBoard();
    void printCurBoard();
    void setPos(int x, int y);
}

game::game() {

}

const bool game::isFinished() const {

}

const char game::getCurPlayer() const {

}

const char game::next() {

}

void printWholeBoard() {

}

void printCurBoard() {

}

void setPos(int x, int y) {

}

