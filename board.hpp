///////////////////////////////////////////////////////////////////////////////
//
//
//
//
//
///////////////////////////////////////////////////////////////////////////////

#ifndef PROJECT_BOARD_HPP
#define PROJECT_BOARD_HPP

#include<iostream>

using std::endl;
using std::cout;

template <typename T>
class TTTBoard {
  private:
	bool won;
    T info[3][3];

	void checkPos(int x, int y)
	{
		//if (x < 0 || x > 2)
			// throw BadCordsExcep;
		//if (y < 0 || y > 2)
			// throw BadCordsExcep;
	}

  public:
	TTTBoard() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				info[i][j] = (T)NULL;
			}
		}
		won = false;
	}

	T getPos(int x, int y) {
		checkPos(x, y);
		return info[x][y];
	}

    void setPos(int x, int y, T val) {
		checkPos(x, y);
		if (won)
			// throw BOARD_WON_EXCEP;
		info[x][y] = val;
    }
    
    bool checkWin(T player) {
		if ((info[0][0] == player) && (info[1][0] == player) && (info[2][0] == player))
		{
			won = true;
			return true;
		}
		else if ((info[0][1] == player) && (info[1][1] == player) && (info[2][1] == player))
		{
			won = true;
			return true;
		}
		else if ((info[0][2] == player) && (info[1][2] == player) && (info[2][2] == player))
		{
			won = true;
			return true;
		}
		else if ((info[0][0] == player) && (info[0][1] == player) && (info[0][2] == player))
		{
			won = true;
			return true;
		}
		else if ((info[1][0] == player) && (info[1][1] == player) && (info[1][2] == player))
		{
			won = true;
			return true;
		}
		else if ((info[2][0] == player) && (info[2][1] == player) && (info[2][2] == player))
		{
			won = true;
			return true;
		}
		else if ((info[0][0] == player) && (info[1][1] == player) && (info[2][2] == player))
		{
			won = true;
			return true;
		}
		else if ((info[0][2] == player) && (info[1][1] == player) && (info[2][0] == player))
		{
			won = true;
			return true;
		}
		else
			return false;
    }
    
	void printBoard() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << info[i][j] << " ";
			}
			cout << endl;
		}
	}
};

/*
// Board implementation for Upper Level Board
*/

template <typename T>
class TTTBoard<TTTBoard<T>> {
  private:
	T player;
	bool won;
    TTTBoard<T> info[3][3];

	void checkPos(int x, int y) {
		//if (x < 0 || x > 2)
			// throw BadCordsExcep;
		//if (y < 0 || y > 2)
			// throw BadCordsExcep;
	}

  public:
	TTTBoard(T init) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				info[i][j] = TTTBoard<T>();
			}
		}

		player = init;
		won = false;
	}

	TTTBoard<T> getPos(int x, int y) {
		checkPos(x, y);
		return info[x][y];
	}

	void setPos(int x, int y, TTTBoard<T> val) {
		checkPos(x, y);
		if (won)
			// throw BOARD_WON_EXCEP;
		info[x][y] = val;
	}

	bool checkWin() {
		if (info[0][0].checkWin(player) && info[1][0].checkWin(player) && info[2][0].checkWin(player)) {
			won = true;
			return true;
		}
		else if (info[0][1].checkWin(player) && info[1][1].checkWin(player) && info[2][1].checkWin(player)) {
			won = true;
			return true;
		}
		else if (info[0][2].checkWin(player) && info[1][2].checkWin(player) && info[2][2].checkWin(player)) {
			won = true;
			return true;
		}
		else if (info[0][0].checkWin(player) && info[0][1].checkWin(player) && info[0][2].checkWin(player)) {
			won = true;
			return true;
		}
		else if (info[1][0].checkWin(player) && info[1][1].checkWin(player) && info[1][2].checkWin(player)) {
			won = true;
			return true;
		}
		else if (info[2][0].checkWin(player) && info[2][1].checkWin(player) && info[2][2].checkWin(player)) {
			won = true;
			return true;
		}
		else if (info[0][0].checkWin(player) && info[1][1].checkWin(player) && info[2][2].checkWin(player)) {
			won = true;
			return true;
		}
		else if (info[0][2].checkWin(player) && info[1][1].checkWin(player) && info[2][0].checkWin(player)) {
			won = true;
			return true;
		}
		else
			return false;
	}

	void printBoard() {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				info[i][j].printBoard();
			}
			cout << endl;
		}
	}
};

#endif
