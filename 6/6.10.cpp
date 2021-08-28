//
// Created by xy on 2021/8/27.
//
#include "iostream"

using namespace std;

int main(){
    int a[5];
    for (int i = 0; i < 5; i++){
        cout << "Input " << i+1 << " num:";
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "The " << i+1 << " num is " << a[i] << endl;
    }
    return 0;
}
