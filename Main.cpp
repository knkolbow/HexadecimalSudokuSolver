#include "Sudoku.h"

#include <fstream>
#include <iostream>

using namespace std;

int main() {
	// Open input/output files
	ifstream fin("puzzle_1.txt");
	if (!fin) {
		cout << "Error: input file does not exist." << endl;
		system("pause");
		return -1;
	}
	ofstream fout("solutions.txt");

	// Create, load, solve, and print Sudoku puzzle
	Sudoku puzzle;
	puzzle.loadData(fin);
	puzzle.solve(fout);

	// Close input/output files
	fin.close();
	fout.close();
	return 0;
}