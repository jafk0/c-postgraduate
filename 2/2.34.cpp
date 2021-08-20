//
// Created by xy on 2021/8/20.
//
#include "iostream"
#include "time.h"

using namespace std;
int main(){
    //随机数生成
    srand((int)time(0));
    int flag = rand()%100;
    int temp;
    while (1){
        cout << "input your guess:";
        cin >> temp;
        if(temp < flag){
            cout << "small." << endl;
            continue;
        } else if (temp > flag){
            cout << "big." << endl;
            continue;
        } else{
            cout << "right!" << endl;
            break;
        }
    }
    return 0;
}
