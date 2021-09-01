//
// Created by xy on 1/9/2021.
//
#include "iostream"

using namespace std;

class BaseClass{
public:
    virtual ~BaseClass(){cout << "~base " << endl;};
};
class DerivedClass:public BaseClass{
public:
    ~DerivedClass() override {
        cout << "~derived " << endl;
    }
};

int main(){
    BaseClass *baseClass = new DerivedClass;
    delete baseClass;
    return 0;
}
