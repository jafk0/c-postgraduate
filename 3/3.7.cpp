//
// Created by xy on 2021/8/22.
//
#include "iostream"

using namespace std;

short int fun(unsigned short int a,unsigned short int b){
    if(b == 0){
        return -1;
    } else{
        return a/b;
    }
}

int main(){
    cout << fun(3,4) << endl;
    cout << fun(1,0) << endl;

    return 0;
}
