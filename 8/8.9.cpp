//
// Created by xy on 1/9/2021.
//
#include "iostream"

using namespace std;

class Shape{
    virtual void GetArea() = 0;
    virtual void GetPerim() = 0;
};
class Rectangle:public Shape{
public:
    void GetArea() override {
        cout << "Rect area" << endl;
    }

    void GetPerim() override {
        cout << "Rect perim" << endl;
    }
};
class Circle:public Shape{
public:
    void GetArea() override {
        cout << "Circle area" << endl;
    }

    void GetPerim() override {
        cout << "Circle perim" << endl;
    }

};
int main(){
    Rectangle r;
    Circle c;
    r.GetArea();
    c.GetPerim();
    return 0;
}
