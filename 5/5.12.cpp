//
// Created by xy on 2021/8/26.
//
#include "iostream"

using namespace std;
void fn1(){
    static int n = 0;
    n++;
    cout << n << endl;
}

int main(){
    for (int i = 0; i < 10; i++){
        fn1();
    }

    return 0;
}
