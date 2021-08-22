//
// Created by xy on 2021/8/22.
//
#include "iostream"

using namespace std;
int max(int a,int b);
int min(int a,int b);

int main(){
    int a,b;
    cout << "Input number:";
    cin >> a;
    cin >> b;
    cout << "The all max:" << max(a,b) << endl;
    cout << "The all min:" << min(a,b) << endl;

    return 0;
}
int max(int a,int b){
    for(int i = a; i > 0; i--){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
    return 1;
}

int min(int a,int b){
    for (int i = a; ; i++){
        if(i % a == 0 && i % b == 0){
            return i;
        }
    }
}