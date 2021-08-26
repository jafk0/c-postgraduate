//
// Created by xy on 2021/8/26.
//
#include "iostream"

using namespace std;
void Function();
int x = 5, y = 7;
int main(){
    cout << "x from main1:" << x << endl;
    cout << "t from main1:" << y << endl;
    Function();
    cout << "Function over!!!" << endl;
    cout << "x from main2:" << x << endl;
    cout << "y from main2:" << y << endl;

    return 0;
}
void Function(){
    int y = 10;
    cout << "x from function:" << x << endl;
    cout << "y from function:" << y << endl;
}