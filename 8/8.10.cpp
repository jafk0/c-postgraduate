//
// Created by xy on 1/9/2021.
//
#include "iostream"

using namespace std;

class Point{
private:
    int val;
public:
    Point(int v):val(v){}
    Point& operator++(){
        ++val;
        return *this;
    }
    Point operator++(int){
        Point p = *this;
        ++val;
        return p;
    }
    void show(){
        cout << val << endl;
    }
};
int main(){
    Point p(3);
    p.show();
    p++;
    p.show();
    Point s = p++;
    s.show();
    p.show();


    return 0;
}
