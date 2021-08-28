//
// Created by xy on 2021/8/27.
//
#include "iostream"

using namespace std;

void Trect(int s[3][3]);
void show(int s[3][3]);

int main(){
    int s[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    show(s);
    Trect(s);
    show(s);
    return 0;
}
void Trect(int s[3][3]){
    for (int i = 0; i < 3; ++i) {
        for (int j = i; j < 3; ++j) {
            int temp = s[i][j];
            s[i][j] = s[j][i];
            s[j][i] = temp;
        }
    }
}
void show(int s[3][3]){
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << s[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}