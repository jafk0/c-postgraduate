//
// Created by xy on 2021/8/29.
//
#include "iostream"

using namespace std;

class Mammal{
public:
    Mammal(){cout << "Mammal Constructor!" << endl;}
    ~Mammal(){cout << "Mammal Destructor!" << endl;}
};
class Dog:public Mammal{
public:
    Dog(){cout << "Dog Constructor!" << endl;}
    ~Dog(){cout << "Dog Destructor!" << endl;}
};

int main(){
    Dog d;
    return 0;
}
