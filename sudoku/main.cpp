//  main.cpp
//  sudoku
//
//  Created by Drew Thomas on 8/31/18.
//  Copyright © 2018 Drew Thomas. All rights reserved.
//
#include <iostream>

using namespace std;

#define UNASSIGNED 0
#define N 9

bool find(int grid[N][N], int &row, int &col);

bool safe(int grid[N][N], int row, int col, int num);

bool solve(int grid[N][N]){
	int row, col;
	if (!find(grid, row, col)){
		return true;
	}
	
	for (int num = 1; num <= 9; num++){
		if (safe(grid, row, col, num)){
			grid[row][col] = num;
			if (solve(grid)){
				return true;
			}
			grid[row][col] = UNASSIGNED;
		}
	}
	return false;
}

bool find(int grid[N][N], int &row, int &col){
	for (row = 0; row < N; row++){
		for (col = 0; col < N; col++){
			if (grid[row][col] == UNASSIGNED){
				return true;
			}
		}
	}
	return false;
}

bool rowe(int grid[N][N], int row, int num){
	for (int col = 0; col < N; col++){
		if (grid[row][col] == num){
			return true;
		}
	}
	return false;
}

bool column(int grid[N][N], int col, int num){
	for (int row = 0; row < N; row++){
		if (grid[row][col] == num){
			return true;
		}
	}
	return false;
}

bool box(int grid[N][N], int boxStartRow, int boxStartCol, int num){
	for (int row = 0; row < 3; row++){
		for (int col = 0; col < 3; col++){
			if (grid[row + boxStartRow][col + boxStartCol] == num){
				return true;
			}
		}
	}
	return false;
}

bool safe(int grid[N][N], int row, int col, int num){
	return !rowe(grid, row, num) && !column(grid, col, num) && !box(grid, row - row % 3, col - col % 3, num) && grid[row][col] == UNASSIGNED;
}

void print(int grid[N][N]){
	for (int row = 0; row < 3; row++){
		for (int col = 0; col < 3; col++){
			cout << "|" << grid[row][col];
		}
		cout << "| ";
		for (int col = 3; col < 6; col++){
			cout << "|" << grid[row][col];
		}
		cout << "| ";
		for (int col = 6; col < 9; col++){
			cout << "|" << grid[row][col];
		}
		cout << "|" << endl;
	}
	cout << endl;
	for (int row = 3; row < 6; row++){
		for (int col = 0; col < 3; col++){
			cout << "|" << grid[row][col];
		}
		cout << "| ";
		for (int col = 3; col < 6; col++){
			cout << "|" << grid[row][col];
		}
		cout << "| ";
		for (int col = 6; col < 9; col++){
			cout << "|" << grid[row][col];
		}
		cout << "|" << endl;
	}
	cout << endl;
	for (int row = 6; row < 9; row++){
		for (int col = 0; col < 3; col++){
			cout << "|" << grid[row][col];
		}
		cout << "| ";
		for (int col = 3; col < 6; col++){
			cout << "|" << grid[row][col];
		}
		cout << "| ";
		for (int col = 6; col < 9; col++){
			cout << "|" << grid[row][col];
		}
		cout << "|" << endl;
	}
}

int main(){
	int grid[N][N] = {{0, 0, 0,   0, 0, 0,   0, 0, 0},
		{0, 0, 0,   0, 0, 0,   0, 0, 0},
		{0, 0, 0,   0, 0, 0,   0, 0, 0},
		
		{0, 0, 0,   0, 0, 0,   0, 0, 0},
		{0, 0, 0,   0, 0, 0,   0, 0, 0},
		{0, 0, 0,   0, 0, 0,   0, 0, 0},
		
		{0, 0, 0,   0, 0, 0,   0, 0, 0},
		{0, 0, 0,   0, 0, 0,   0, 0, 0},
		{0, 0, 0,   0, 0, 0,   0, 0, 0},};

	cout << endl << endl << "enter a couple of numbers" << endl;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << "[" << (i+1) << ", " << (j+1) << "] = ";
			cin >> grid[i][j];
		}
	}
//	printGrid(grid);
	
	if (solve(grid) == true){
		print(grid);
		cout << "it works" << endl;
	}else{
		cout << "No solution exists";
	}
	return 0;
}
/*    int grid[N][N] = {{0, 0, 0,   0, 0, 0,   0, 0, 0},
 {0, 0, 0,   0, 0, 0,   0, 0, 0},
 {0, 0, 0,   0, 0, 0,   0, 0, 0},
 
 {0, 0, 0,   0, 0, 0,   0, 0, 0},
 {0, 0, 0,   0, 0, 0,   0, 0, 0},
 {0, 0, 0,   0, 0, 0,   0, 0, 0},
 
 {0, 0, 0,   0, 0, 0,   0, 0, 0},
 {0, 0, 0,   0, 0, 0,   0, 0, 0},
 {0, 0, 0,   0, 0, 0,   0, 0, 0},};*/
