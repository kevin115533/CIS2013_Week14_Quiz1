#include <iostream>
#include <string>
using namespace std;

class Game {
private:
	
	string name;
	int score;
public:
	Game() {
		string gameName = "MineSweeper";
	}

	void setName(string x) {
		name = x;
	}

	void setScore(int x) {
		score = x;
	}

	string getName() {
		return name;
	}

	int getScore() {
		return score;
	}

};

class MineSweeper :public Game {
private:
	int boardRows, boardCols, userCood, mine;
	int boardSize;
public:

	void setRows(){
		cin >> boardRows;
	}

	void setCols() {
		cin >> boardCols;
	}

	void setBombs() {
		cin >> mine;
	}

	void printBoard() {
		for (int x = 0; x < boardCols; x++) {
			cout << x << " ";
		}
		cout << endl;
		for (int x=0; x < boardCols; x++) {
			cout << x +1 << " ";
			for (int y = 0; y < boardRows; y++) {
				cout << ". ";
			}
			cout << endl;
		}
	}
};

int main() {
	char stay;
	int userRows, userCols, userBomb;
	string userName;
	MineSweeper user;

	cout << "What is your name? ";
	cin >> userName;
	user.setName(userName);

	cout << "How many rows would you like to play with? ";
	user.setRows();

	cout << "How many columns would you like to play with? ";
	user.setCols();
	
	cout << "How many bombs do you want to play with? ";
	user.setBombs();
	
	user.printBoard();

	cin >> stay;
}
