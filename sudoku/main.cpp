//
//  main.cpp
//  sudoku
//
//  Created by Drew Thomas on 8/31/18.
//  Copyright © 2018 Drew Thomas. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

int x = 8;
int y = 8;
int real = x + 1;
int total = ((x + 1) * (x + 2))/2;
int line1total = total;
int line2total = total;
int line3total = total;
int line4total = total;
int line5total = total;
int line6total = total;
int line7total = total;
int line8total = total;
int line9total = total;
int column1total = total;
int column2total = total;
int column3total = total;
int column4total = total;
int column5total = total;
int column6total = total;
int column7total = total;
int column8total = total;
int column9total = total;
vector < vector < vector<int> > > tube;

void func(int lineTotal){
	if(real == 3){
		bool slot1;
		bool slot2;
		bool slot3;
		slot1 = tube[0][0][0];
		slot2 = tube[0][0][0];
		slot3 = tube[0][0][0];
		if(tube[0][0][0] == 0){
			slot1 = false;
		}else{
			slot1 = true;
		}
		if(tube[0][1][0] == 0){
			slot2 = false;
		}else{
			slot2 = true;
		}
		if(tube[0][2][0] == 0){
			slot3 = false;
		}else{
			slot3 = true;
		}
		for(int i=0;i<=x;i++){
			line1total -= tube[0][i][0];
		}
		cout << line1total << endl;
		cout << slot1 << endl << slot2 << endl << slot3 << endl;
	}
	int defacit = total - line1total;
	cout << defacit << endl;
}

int main(int argc, const char * argv[]) {
    vector<vector<int>> tube;
    for(int i=0;i<=y;i++)
    {
        tube.push_back(vector<int>());
        for(int j=0;j<=x;j++)
        {
			int a;
			cout << "enter a shit ton of numbers" << endl;
			cin >> a;
			tube[i][j].push_back(a);
			cout << "[" << i << ", " << j << ", " << tube[i][j] << "]" << endl;

        }
    }
    for(int i=0;i<=y;i++){
        for(int j=0;j<=x;j++){
            cout << "|" << tube[i][j];
        }
        cout << "|" << endl;
		while()
			cout << "--"
    }

	
    return 0;
}
