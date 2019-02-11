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

//void()

int main(int argc, const char * argv[]) {
    /*int x = 2;
    int y = 2;
    int real = x + 1;
    int total = ((x + 1) * (x + 2))/2;
    vector < vector < vector<int> > > tube;
    for(int i=0;i<=y;i++)
    {
        tube.push_back(vector<vector<int> >());
        for(int j=0;j<=x;j++)
        {
            tube[i].push_back(vector<int>());
            for(int k=0;k<5;k++)
            {
                int a;
//                cout << "[" << i << " , " << j << ", ";
//                cin >> a;
                tube[i][j].push_back(0);
//                cout << "[" << i << ", " << j << ", " << tube[i][j][k] << "]" << endl;
            }
        }
    }
    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            cout << "|" << tube[i][j][0];
        }
        cout << "|" << endl;
    }
    
    if(real == 3){
		int line1total = total;
		bool slot1;
		bool slot2;
		bool slot3;
		slot1 = tube[0][0][0];
//		if(tube[0][0][0] == 0){
//			slot1 = false;
//		}else{
//			slot1 = true;
//		}
//		if(tube[0][1][0] == 0){
//			slot2 = false;
//		}else{
//			slot2 = true;
//		}
//		if(tube[0][2][0] == 0){
//			slot3 = false;
//		}else{
//			slot3 = true;
//		}
//		for(int i=0;i<=x;i++){
//			line1total -= tube[0][i][0];
//		}
		cout << line1total << endl;
		
    }
//    cout << "|" << tube[0][0][0] << "|" << tube[0][1][0] << "|" << tube[0][2][0] << "|" << endl;
//    cout << "|" << tube[1][0][0] << "|" << tube[1][1][0] << "|" << tube[1][2][0] << "|" << endl;
//    cout << "|" << tube[2][0][0] << "|" << tube[2][1][0] << "|" << tube[2][2][0] << "|" << endl;
//    cout << tube[0][0][0];
//    for(int i=0;i<10;i++){
//        for(int j=0;j<10;j++){
//            int a;
//            cout << "[" << i << " , " << j << ", ";
//            cin >> a;
//            tube[i][j].push_back(a);
//        }
//    }*/
	
	struct slot {
		int num;
		bool nonzero = true;
	};
	
	vector<vector<slot>> vector;
	vector.
	
	
    return 0;
}
