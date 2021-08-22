//
// Created by xy on 2021/8/22.
//
#include "iostream"

using namespace std;
int main(){
    int temp, i = 2;
    cout << "Input yor number:";
    cin >> temp;
    for (; i < temp; i++){
        if(temp % i == 0) {
            break;
        }
    }
    if (i == temp){
        cout << "It is a prime number";
    } else{
        cout << "It not";
    }

    return 0;
}
