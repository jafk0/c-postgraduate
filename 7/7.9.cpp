//
// Created by xy on 2021/8/29.
//
#include "iostream"

using namespace std;

class Base{
public:
    void fn1(){cout << "base fn1";}
    void fn2(){}
};
class Derived:private Base{
public:
    void fn1(){Base::fn1();}
};
int main(){
    Derived d;
    d.fn1();

    return 0;
}
