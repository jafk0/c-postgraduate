//
// Created by xy on 1/9/2021.
//
#include "iostream"

using namespace std;

class BaseClass{
public:
    virtual void fn1(){cout << "base fn1" << endl;};
    void fn2(){cout << "base fn2" << endl;};
};
class DerivedClass:public BaseClass{
public:
    void fn1(){cout << "derived fn1" << endl;};
    void fn2(){cout << "derived fn2" << endl;};
};
int main(){
    DerivedClass derivedClass;
    BaseClass *base = &derivedClass;
    base->fn1();
    base->fn2();
    DerivedClass *derivedClass1 = &derivedClass;
    derivedClass1->fn1();
    derivedClass1->fn2();

    return 0;
}
