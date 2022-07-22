#include <iostream>
#include <string>
using namespace std;
using std::cout;
using std::cin;

const int ROWS = 3;
const int COLS = 3;

void runGame();
void intializeGameBoard(string gameBoard[ROWS][COLS]);
void printCurrentBoard(string gameBoard[ROWS][COLS]);
void getUserInput(bool xTurn, string gameBoard[ROWS][COLS]);
bool cellAlreadyOccuspied(int row, int col, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS], string player);
bool isBoardFull(string gameBoard[ROWS][COLS]);
void changeBoardValue(bool xTurn, int row, int col, string gameBoard[ROWS][COLS]);

int main()
{
	runGame();
	return 0;
}

void runGame()
{
	cout << "Welcome to Tik Tak Toe" << endl;
	string gameBoard[ROWS][COLS];
	bool xTurn = true;
	intializeGameBoard(gameBoard);
	cout << endl;
	getUserInput(xTurn, gameBoard);
}

void intializeGameBoard(string gameBoard[ROWS][COLS])
{

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			gameBoard[i][j] = " ";
			//cout << gameBoard[i][j]; Testing of Intialized Array
		}
		//cout << endl; Testing of Intialized Array
	}
	printCurrentBoard(gameBoard);
}

void printCurrentBoard(string gameBoard[ROWS][COLS])
{
	for (int row = 0; row <= 2; row++)
	{
		for (int column = 0; column <= 2; column++)
		{
			cout << gameBoard[row][column];
			if (column < 2)
			{
				cout <<  " | ";
			}
		}
		cout << endl;
		if (row < 2)
		{
			cout << "---------" << endl;
		}
	}
}

void getUserInput(bool xTurn, string gameBoard[ROWS][COLS])
{
	int row = 0;
	int column = 0;
	bool cellOcupied = false;
	bool boardFull = false;
	string player = "";
	string winner = "NO";
	while ((boardFull == false) && (winner == "NO"))
	{
		//cout << boardFull << "        " << winner << endl;
		if (xTurn == true)
		{
			player = "X";
			//boardFull = isBoardFull(gameBoard);
			//winner = getWinner(gameBoard, player);
			cout << "Player 1 Turn" << endl;
			cout << "Please enter the row then the column, each from 0, 1, or 2" << endl;
			cin >> row >> column;
			cout << endl;
			cellOcupied = cellAlreadyOccuspied(row, column, gameBoard);
			if (cellOcupied == false)
			{
				changeBoardValue(xTurn, row, column, gameBoard);
				xTurn = false;
				printCurrentBoard(gameBoard);
				cout << endl;
				boardFull = isBoardFull(gameBoard);
				winner = getWinner(gameBoard, player);
			}
			else
			{
				cout << "Space is Already Full Please Choose other Spot" << endl;
				xTurn = true;
				printCurrentBoard(gameBoard);
				cout << endl;
			}
		}
		else
		{
			player = "O";
			//boardFull = isBoardFull(gameBoard);
			//winner = getWinner(gameBoard, player);
			cout << "Player 2 turn" << endl;
			cout << "Please enter the row then the column, each from 0, 1, or 2" << endl;
			cin >> row >> column;
			cout << endl;
			cellOcupied = cellAlreadyOccuspied(row, column, gameBoard);
			if (cellOcupied == false)
			{
				changeBoardValue(xTurn, row, column, gameBoard);
				xTurn = true;
				printCurrentBoard(gameBoard);
				cout << endl;
				boardFull = isBoardFull(gameBoard);
				winner = getWinner(gameBoard, player);
			}
			else
			{
				cout << "Space is Already Full Please Choose other Spot" << endl;
				xTurn = false;
				printCurrentBoard(gameBoard);
				cout << endl;
			}
		}
	}
	if (boardFull == true)
	{
		cout << "No One Won" << endl;
		cout << "Thanks For Playing!" << endl;
	}
	else if (winner == "X")
	{
		cout << "Player 1 Won!" << endl;
		cout << "Thanks for Playing!" << endl;
	}
	else if (winner == "O")
	{
		cout << "Player 2 Won!" << endl;
		cout << "Thanks For Playing!" << endl;
	}
}

bool cellAlreadyOccuspied(int row, int col, string gameBoard[ROWS][COLS])
{
	if (gameBoard[row][col] == " ")
	{
		return false;
	}
	return true;
}

void changeBoardValue(bool xTurn, int row, int col, string gameBoard[ROWS][COLS])
{
	if (xTurn == true)
	{
		gameBoard[row][col] = "X";
	}
	else
	{
		gameBoard[row][col] = "O";
	}
}

bool isBoardFull(string gameBoard[ROWS][COLS])
{
	int sum = 0;
	for (int row = 0; row <= 2; row++)
	{
		for (int column = 0; column <= 2; column++)
		{
			if (gameBoard[row][column] == "X" || gameBoard[row][column] == "O")
			{
				sum++;
			}
		}
	}
	//cout << sum << endl;
	if (sum == 9)
	{
		return true;
	}
	return false;
}

string getWinner(string gameBoard[ROWS][COLS], string player)
{
	//cout << player << endl;
	if ((gameBoard[0][0] == player) && (gameBoard[1][0] == player) && (gameBoard[2][0] == player))
	{
		return player;
	}
	else if ((gameBoard[0][1] == player) && (gameBoard[1][1] == player) && (gameBoard[2][1] == player))
	{
		return player;
	}
	else if ((gameBoard[0][2] == player) && (gameBoard[1][2] == player) && (gameBoard[2][2] == player))
	{
		return player;
	}
	else if ((gameBoard[0][2] == player) && (gameBoard[1][1] == player) && (gameBoard[2][0] == player))
	{
		return player;
	}
	else if ((gameBoard[0][0] == player) && (gameBoard[0][1] == player) && (gameBoard[0][2] == player))
	{
		return player;
	}
	else if ((gameBoard[1][0] == player) && (gameBoard[1][1] == player) && (gameBoard[1][2] == player))
	{
		return player;
	}
	else if ((gameBoard[2][0] == player) && (gameBoard[2][1] == player) && (gameBoard[2][2] == player))
	{
		return player;
	}
	else if ((gameBoard[0][0] == player) && (gameBoard[1][1] == player) && (gameBoard[2][2] == player))
	{
		return player;
	}
	else
	{
		return "NO";
	}
}
