

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

vector < vector < vector<int> > > tube;



int main(int argc, const char * argv[]) {
	
	vector<vector<int>> tube;
	
	for(int i=0;i<=y;i++)
		
	{
		
		tube.push_back(vector<int>(7));
		
		for(int j=0;j<=x;j++)
			
		{
			
			int a;
			
			//cout << "enter a shit ton of numbers" << endl;
			
			//cin >> a;
			
			tube[i][j] = 0;
			
			cout << "[" << i << ", " << j << ", " << tube[i][j] << "]" << endl;
			
			
			
		}
		
	}
	
	for(int i=0;i<=y;i++){
		
		for(int j=0;j<=x;j++){
			
			//			cout << i << " : " << j << " > " << tube[i][j] << endl;
			
			cout << "|" << tube[i][j];
			
		}
		
		cout << "|" << endl;
		
	}
	
	
	
	
	
	return 0;
	
}
