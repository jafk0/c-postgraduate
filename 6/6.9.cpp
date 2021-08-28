//
// Created by xy on 2021/8/27.
//
#include "iostream"

using namespace std;


int main(){
    char a[5] = "test";
    bool flag = a[4]=='\0';
    cout << flag << endl;
    flag = a[4] == NULL;
    cout << flag << endl;

    return 0;
}
