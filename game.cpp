#include "game.hpp"

Game::Game(void) : board('_') {
  finished = false;
  curBoard[0] = 1;
  curBoard[1] = 1;
  nextBoard[0] = 1;
  nextBoard[1] = 1;
  curPlayer = 'X';
  players[0] = 'X';
  players[1] = 'O';
}

const bool Game::isFinished(void) const {
  return finished;
}

const bool Game::curWon() {
  return board.getPos(curBoard[0], curBoard[2]).checkWin(curPlayer);
}

const char Game::getCurPlayer(void) const {
  return curPlayer;
}

const char Game::next(void) {
  if(curPlayer == players[0]) {
    curPlayer = players[1];
  } else {
    curPlayer = players[0];
  }
  curBoard[0] = nextBoard[0];
  curBoard[1] = nextBoard[1];
  finished = board.checkWin(curPlayer);
  return curPlayer;
}

void Game::setCurBoard(int x, int y) {
  if((x < 0) | (x > 2))
    throw BadCordsExcept();
  if((y < 0) | (y > 2))
    throw BadCordsExcept();
  curBoard[0] = x;
  curBoard[1] = y;
}

void Game::printWholeBoard(void) {
  board.printBoard();
}

void Game::printCurBoard(void) {
  board.getPos(curBoard[0], curBoard[1]).printBoard();
}

void Game::setPos(int x, int y) {
  board.getPos(curBoard[0], curBoard[1]).setPos(x, y, curPlayer);
  nextBoard[0] = x;
  nextBoard[1] = y;
}

