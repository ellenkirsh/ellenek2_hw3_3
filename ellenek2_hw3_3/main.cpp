//
//  main.cpp
//  ellenek2_hw3_3
//
//  Created by Ellen Kirsh on 9/22/21.
//

#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    int n;
    cout << "How many times do you want to toss the coin? \n";
    cin >> n;
    for(int i = 0; i < n; i++){
        int x = rand()%2;
        if(x == 0){
            cout << "Heads \n";
        }else if (x==1){
            cout << "Tails \n";
        }
    }
    return 0;
}
