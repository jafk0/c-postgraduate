//
// Created by xy on 2021/8/29.
//
#include "iostream"

using namespace std;

class Shape{
public:
    virtual double GetArea() = 0;
};
class Rectangle:public Shape{
private:
    double w;
    double h;
public:
    Rectangle(double w,double h):w(w),h(h){}
    virtual double GetArea(){return w*h;}
};
class Circle:public Shape{
private:
    double r;
public:
    Circle(double r):r(r){}
    double GetArea() {
        return 3.14*r*r;
    }
};
class Square:public Rectangle{
public:
    Square(double l) : Rectangle(l,l) {}
    double GetArea() override {
        return Rectangle::GetArea();
    }
    void fun(){
        cout << "fun" << endl;
    }
};

int main(){
    Shape* sp;
    sp = new Circle(3);
    cout << "Circle:" << sp->GetArea() << endl;
    sp = new Square(4);
    cout << "Square:" << sp->GetArea() << endl;
//    sp->fun();
    return 0;
}
