//
// Created by xy on 2021/8/22.
//
#include "iostream"

using namespace std;

int GetPower(int x,int y);
int main(){
    int x,y;
    cout << "Input (x^y)x,y:";
    cin >> x;
    cin >> y;
    cout << "Output x^y:" << GetPower(x,y) << endl;
    return 0;
}

int GetPower(int x,int y){
    if (y == 1){
        return x;
    }
    return x* GetPower(x,y-1);
}