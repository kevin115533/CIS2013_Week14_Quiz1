#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Game{
private:
	string name;
	int score;
public:
	

	Game(string nm) {
		name = nm;
	}

	string getName() {
		return name;
	}

	int getScore() {
		return score;
	}

	void setName(string x) {
		name = x;
	}

	void setScore(int x) {
		score = x;
	}
};

class MineSweeper :public Game {
public:
	int rows, columns, selectedSpot, bombSpot;

	MineSweeper(string nm,int r, int c):Game(nm) {
		rows = r;
		columns = c;
	}

	void setColumns(int x) {
		columns = x;
	}

	void setRows(int x) {
		rows = x;
	}

	void printUserBoard(int rw, int co) {
		for (int x = 0; x < co; x++) {
			cout << x << " ";
		}
		cout << endl;
		for (int x = 0; x < co; x++) {
			for (int y = 0; y < rw; y++) {
				cout << ". ";
			}
			cout << endl;
		}
	}

	void mineBoard(int **x) {
		x = new int*[columns];
		for (int i = 0; i < columns; i++) {
			x[i] = new int[rows];
		}
	}
};

int main() {
	char stay;
	string name;
	int columns, rows, mines;
	int **mineField, **userField;

	cout << "Welcome to Minesweeper" << endl;
	cout << "What is your name? ";
	cin >> name;

	cout << "How many columns do you want to play? ";
	cin >> columns;

	cout << "How many rows do you want to play? ";
	cin >> rows;

	cout << "How many mines do you want on the field? ";
	cin >> mines;

	MineSweeper user(name, rows, columns);
	
	

	cin >> stay;

	return 0;
}
