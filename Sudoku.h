#ifndef SUDOKU_H
#define SUDOKU_H

#include <iostream>
#include <vector>

using std::vector;

class Sudoku {
private:
	// Data fields
	char** board;
	static const int SIZE;
	static const char BLANK;
	vector<char> digits = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f' };
	int count;		 // Stores the number of solutions found

	// Functions
	int nextRowIndex(int, int) const;
	int nextColIndex(int, int) const;
	bool inSameRow(int, char) const;
	bool inSameCol(int, char) const;
	bool inSameGrid(int, int, char) const;
	void solve(int, int, std::ostream&);

public:
	// Constructors
	Sudoku();	// Default constructor
	Sudoku(const Sudoku&); // Copy constructor

	// Destructor
	~Sudoku();

	// Functions
	const Sudoku& operator = (const Sudoku&);
	void loadData(std::istream&);
	void solve(std::ostream&);
	void printSolution(std::ostream&) const;

};
#endif