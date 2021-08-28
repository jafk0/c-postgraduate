//
// Created by xy on 2021/8/27.
//
#include "iostream"

using namespace std;

int main(){
    int a;
    int* p = &a;
    int &r = a;
    *p = 10;
    cout << a << endl;
    r = 5;
    cout << a << endl;
    return 0;
}
