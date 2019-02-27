#include <iostream>

using namespace std;

int main()
{
	int NumberOfCells, CellToVisit;

	cin >> NumberOfCells >> CellToVisit;

	// a[i], the amount to add to each cell location to get to the new cell
	int CellShifts[30001];

	for (int i = 1; i < NumberOfCells; i++)
	{
		cin >> CellShifts[i];
	}

	// Move to the next cell as log as you are in a cell before the target cell
	int CurrentCell = 1;
	while (CurrentCell < CellToVisit)
	{
		CurrentCell = CurrentCell + CellShifts[CurrentCell];
	}

	// if the cell we landed on is the target cell, then we can reach it.
	// If we didn't, then there is no way to get back because you can only move forwards.
	if (CurrentCell == CellToVisit)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}