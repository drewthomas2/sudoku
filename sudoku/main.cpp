//  main.cpp
//  sudoku
//
//  Created by Drew Thomas on 8/31/18.
//  Copyright © 2018 Drew Thomas. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;

#define UNASSIGNED 0
#define N 9

bool SolveSudoku(vector<vector<int>> grid);

bool UsedInRow(vector<vector<int>> grid, int row, int num)
{
	for (int col = 0; col < N; col++)
		if (grid[row][col] == num)
			return true;
	return false;
}

bool UsedInCol(vector<vector<int>> grid, int col, int num)
{
	for (int row = 0; row < N; row++)
		if (grid[row][col] == num)
			return true;
	return false;
}

bool UsedInBox(vector<vector<int>> grid, int boxStartRow, int boxStartCol, int num)
{
	for (int row = 0; row < 3; row++)
		for (int col = 0; col < 3; col++)
			if (grid[row+boxStartRow][col+boxStartCol] == num)
				return true;
	return false;
}

bool FindUnassignedLocation(vector<vector<int>> grid, int &row, int &col)
{
	for (row = 0; row < N; row++)
		for (col = 0; col < N; col++)
			if (grid[row][col] == UNASSIGNED)
				return true;
	return false;
}

bool isSafe(vector<vector<int>> grid, int row, int col, int num)
{
	return !UsedInRow(grid, row, num) && !UsedInCol(grid, col, num) && !UsedInBox(grid, row - row%3 , col - col%3, num)&& grid[row][col]==UNASSIGNED;
}

bool SolveSudoku(vector<vector<int>> grid)
{
	int row, col;
	if (!FindUnassignedLocation(grid, row, col)){
		return true;
	}
	for (int num = 1; num <= 9; num++)
	{
		if (isSafe(grid, row, col, num)){
			grid[row][col] = num;
			if (SolveSudoku(grid)){
				return true;
			}
			grid[row][col] = UNASSIGNED;
		}
	}
	return false;
}

void printGrid(vector<vector<int>> grid)
{
	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < N; col++)
			cout << "|" << grid[row][col];
	}
	cout << "|" << endl;
}


int main()
{

//        int grid[N][N] = {
//        {3, 0, 6, 5, 0, 8, 4, 0, 0},
//        {5, 2, 0, 0, 0, 0, 0, 0, 0},
//        {0, 8, 7, 0, 0, 0, 0, 3, 1},
//        {0, 0, 3, 0, 1, 0, 0, 8, 0},
//        {9, 0, 0, 8, 6, 3, 0, 0, 5},
//        {0, 5, 0, 0, 9, 0, 6, 0, 0},
//        {1, 3, 0, 0, 0, 0, 2, 5, 0},
//        {0, 0, 0, 0, 0, 0, 0, 7, 4},
//        {0, 0, 5, 2, 0, 6, 3, 0, 0}};
	
	vector<vector<int>> tube;
	for(int i=0;i<N;i++)
	{
		tube.push_back(vector<int>(7));
		for(int j=0;j<N;j++)
		{
			int a;
			cout << "enter a couple of numbers" << endl;
			cin >> a;
			cin.getline();
			cout << "xcode is a piece of fucking trash bitch ass head ass "
			tube[i][j] = a;
			cout << "[" << i << ", " << j << ", " << tube[i][j] << "]" << endl;
		}
	}
	
	if (SolveSudoku(tube) == true){
		cout << "epic victory royale"<< endl;
	}
	else
		cout << "No solution exists" << endl;
	return 0;
}
