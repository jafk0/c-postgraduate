//
// Created by xy on 1/9/2021.
//
#include "iostream"

using namespace std;

class Mammal{
public:
    virtual void Speak(){cout << "mam!!!" << endl;};
};

class Dog:public Mammal{
public:
    void Speak() override {
        cout << "Dog!!!" << endl;
    }
};

int main(){
    Dog d;
    d.Speak();

    return 0;
}
