//
// Created by xy on 2021/8/22.
//
#include "iostream"

using namespace std;
int main(){
    double tempf;
    cout << "please input °F:";
    cin >> tempf;
    cout << "The °C is:" << (tempf - 32) * 5 / 9;

    return 0;
}
