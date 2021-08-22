//
// Created by xy on 2021/8/22.
//
#include "iostream"

using namespace std;

int Fibonacci(int n);
int main(){
    int temp;
    cout << "Input number:";
    cin >> temp;
    cout << "Fibonacci is :" << Fibonacci(temp) << endl;

    return 0;
}

int Fibonacci(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}