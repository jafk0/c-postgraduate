//
// Created by xy on 2021/8/27.
//
#include "iostream"

using namespace std;

void Trect(int **s,int n);
void show(int **s,int n);

int main(){
    int n;
    cin >> n;
    int **s = new int*[n];
    for (int i = 0; i < n; ++i) {
        s[i] = new int [n];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << i << ',' << j << ':';
            cin >> s[i][j];
        }
    }
    show(s,n);
    Trect(s,n);
    show(s,n);
    return 0;
}
void Trect(int **s,int n){
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int temp = s[i][j];
            s[i][j] = s[j][i];
            s[j][i] = temp;
        }
    }
}
void show(int **s,int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << s[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}

