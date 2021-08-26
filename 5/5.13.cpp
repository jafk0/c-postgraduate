//
// Created by xy on 2021/8/26.
//
#include "iostream"
#include "5.13.h"

using namespace std;

int main(){
    X x;
    Y y;
    Z z;
    x.show();
    y.g(&x);
    x.show();
    z.f(&x);
    x.show();
    h(&x);
    x.show();
    return 0;
}