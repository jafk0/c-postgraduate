//
// Created by xy on 2021/8/22.
//
#include "iostream"

using namespace std;

int fun(int n);
int main(){
    int n;
    cout << "Input a number:";
    cin >> n;
    cout << "Output:" << fun(n);

    return 0;
}
int fun(int n){
    if (n == 1){
        return 1;
    } else{
        return n + fun(n - 1);
    }
}