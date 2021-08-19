//
// Created by xy on 2021/8/19.
//
#include "iostream"

using namespace std;

int main(){
    for (int i = 1; i <= 100; i++){
        int j;
        for (j = 2; j < i; ++j) {
            if(i % j == 0){
                break;
            }
        }
        if (j == i){
            cout << j << '\t';
        }
    }
    return 0;
}