//
// Created by xy on 2021/8/22.
//
#include "iostream"

using namespace std;

double leirangde(int n,int x);
int main(){
    int n,x;
    cout << "Input number(x,n):";
    cin >> x;
    cin >> n;
    cout << "The leirangduo:" << leirangde(n,x) << endl;

    return 0;
}

double leirangde(int n,int x){
    if (n == 0){
        return 1;
    } else if (n == 1){
        return x;
    }
    return ((2*n-1)*x* leirangde(n-1,x)-(n -1 )* leirangde(n-2,x))/n;
}