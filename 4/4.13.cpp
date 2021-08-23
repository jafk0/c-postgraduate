//
// Created by xy on 2021/8/23.
//
#include "iostream"

using namespace std;

class Circle{
public:
    Circle(double r):Radius(r){};
    double GetArea(){
        return 3.14*Radius*Radius;
    }

private:
    double Radius;
};

int main(){
    Circle circle(2);
    cout << "Circle Area is :" << circle.GetArea() << endl;

    return 0;
}
