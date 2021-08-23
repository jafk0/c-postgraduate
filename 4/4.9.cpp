//
// Created by xy on 2021/8/23.
//
#include "iostream"

using namespace std;

class Rectangle{
public:
    Rectangle(double pxLeft, double pyLeft, double pxRight, double pyRight);

    double getS();

    double getPxLeft() const;
    void setPxLeft(double pxLeft);
    double getPyLeft() const;
    void setPyLeft(double pyLeft);
    double getPxRight() const;
    void setPxRight(double pxRight);
    double getPyRight() const;
    void setPyRight(double pyRight);

private:
    double pxLeft;
    double pyLeft;
    double pxRight;
    double pyRight;
};

double Rectangle::getS() {
    return (pyRight-pyLeft)*(pxRight-pxLeft);
}

double Rectangle::getPxLeft() const {
    return pxLeft;
}

void Rectangle::setPxLeft(double pxLeft) {
    Rectangle::pxLeft = pxLeft;
}

double Rectangle::getPyLeft() const {
    return pyLeft;
}

void Rectangle::setPyLeft(double pyLeft) {
    Rectangle::pyLeft = pyLeft;
}

double Rectangle::getPxRight() const {
    return pxRight;
}

void Rectangle::setPxRight(double pxRight) {
    Rectangle::pxRight = pxRight;
}

double Rectangle::getPyRight() const {
    return pyRight;
}

void Rectangle::setPyRight(double pyRight) {
    Rectangle::pyRight = pyRight;
}

Rectangle::Rectangle(double pxLeft, double pyLeft, double pxRight, double pyRight) : pxLeft(pxLeft), pyLeft(pyLeft),
                                                                                     pxRight(pxRight),
                                                                                     pyRight(pyRight) {}

int main(){
    Rectangle rectangle(1,2,3,4);
    cout << "S is:" << rectangle.getS() << endl;

    return 0;
}