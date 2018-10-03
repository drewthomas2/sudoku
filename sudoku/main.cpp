//
//  main.cpp
//  sudoku
//
//  Created by Drew Thomas on 8/31/18.
//  Copyright © 2018 Drew Thomas. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<vector<int>>> grid;
    /*
    vector<int> myvector;
    int myint;
    cout << "enter a number" << endl;
    cin >> myint;
    myvector.push_back(myint);
    cout << myvector [0] << endl << endl << endl;
    */
    /*
    sollist.push_back(vector<vector<int>>());
    sollist[0].push_back(vector<int>());
    sollist[0][0].push_back(value);
    */
    for (int i = 0; i <= 9 ; i++) {
        grid.push_back(vector<vector<int>>());
        grid[0].push_back(vector<int>());
        grid[0][0].push_back(1);
        
//        for (int j = 0; j <= 9; j++) {
//            for (int k = 0; k <= 9; k++){
//                grid[i][j][k];
//            }
//        }
    }
    cout << grid[0][0][0];
    return 0;
}
