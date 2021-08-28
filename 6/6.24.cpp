//
// Created by xy on 2021/8/27.
//
#include "iostream"

using namespace std;

int main(){
    double s[8];
    for (int i = 0; i < 8; ++i) {
        cout << "please input the " << i+1 << " student score:";
        cin >> s[i];
    }
    double all = 0;
    for (int i = 0; i < 8; ++i) {
        all += s[i];
    }
    cout << all/8 << endl;

    return 0;
}
