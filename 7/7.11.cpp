//
// Created by xy on 2021/8/29.
//
#include "iostream"

using namespace std;

class BaseClass{
public:
    void fn1(){
        cout << "Base fn1" << endl;
    }
    void fn2(){
        cout << "Base fn2" << endl;
    }
};
class DerivedClass:public BaseClass{
public:
    void fn1(){
        cout << "Derived fn1" << endl;
    }
    void fn2(){
        cout << "Derived fn2" << endl;
    }
};

int main(){
    DerivedClass derivedClass;
    BaseClass *baseClass = &derivedClass;
    baseClass->fn1();
    baseClass->fn2();
    DerivedClass *derivedClass1 = &derivedClass;
    derivedClass1->fn1();
    derivedClass1->fn2();

    return 0;
}
