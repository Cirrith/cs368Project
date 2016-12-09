#ifndef GAME_HPP
#define GAME_HPP

#include "board.hpp"

class Game {
  private:
    char players[2];
    char curPlayer;
    TTTBoard<TTTBoard<char>> board;
    int curBoard[2];
    int nextBoard[2];
    bool finished;

  public:
    Game();
    const bool isFinished() const;
    const bool curWon();
    const char getCurPlayer() const;
    const char next();
    void setCurBoard(int x, int y);
    void printWholeBoard();
    void printCurBoard();
    void setPos(int x, int y);
};

#endif
