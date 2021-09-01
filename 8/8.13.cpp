//
// Created by xy on 1/9/2021.
//
#include "iostream"

using namespace std;

class Point{
private:
    int x,y;
public:
    Point(int x,int y):x(x),y(x){}
    void show(){cout << "x:" << x << "  y:" << y << endl;}
    friend Point operator+(Point &p,int val){
        Point temp = p;
        temp.x += val;
        temp.y += val;
        return temp;
    }
    friend Point operator+(int val,Point &p){
        Point temp = p;
        temp.x += val;
        temp.y += val;
        return temp;
    }

};

int main(){
    Point p(1,2);
    p.show();
    p = p + 4;
    p.show();

    return 0;
}
