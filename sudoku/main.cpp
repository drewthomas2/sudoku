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
    
    vector < vector < vector<int> > > tube;
    for(int i=0;i<10;i++)
    {
        tube.push_back(vector<vector<int> >());
        for(int j=0;j<10;j++)
        {
            tube[i].push_back(vector<int>());
            for(int k=0;k<1;k++)
            {
                tube[i][j].push_back(k);
                //cout << "[" << i << ", " << j << ", " << tube[i][j][k] << "]";
            }
        }
    }
    cout << tube[0][0][0];
    return 0;
}
