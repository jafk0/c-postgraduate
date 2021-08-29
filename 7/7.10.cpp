//
// Created by xy on 2021/8/29.
//
#include "iostream"

using namespace std;

class object{
private:
    double weight;
public:
    object(double weight) : weight(weight) {cout << "object cconstructor!" << endl;}

    double getWeight() const {
        return weight;
    }
};
class box:public object{
private:
    double height;
    double width;
public:
    box(double weight, double height, double width) : object(weight), height(height), width(width) {
        cout << "box constructor!" << endl;
    }

    double getHeight() const {
        return height;
    }

    void setHeight(double height) {
        box::height = height;
    }

    double getWidth() const {
        return width;
    }

    void setWidth(double width) {
        box::width = width;
    }

};

int main(){
    box *b = new box(12,3,4);


    return 0;
}
