//
// Created by xy on 1/9/2021.
//
#include "iostream"

using namespace std;
int Double(int x){
    cout << "int" << endl;
    return x*2;
}
double Double(double x){
    cout << "double" << endl;
    return x*2;
}
int main(){
    cout << Double(2) << endl;
    cout << Double(2.00) << endl;

    return 0;
}
