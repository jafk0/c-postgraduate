//
// Created by xy on 1/9/2021.
//
#include "iostream"

using namespace std;
class Rectangle{
public:
    Rectangle(){itsLength=0;itsWidth=0;};
    Rectangle(int w,int l):itsLength(l),itsWidth(w){}
    void show(){cout << itsLength*itsWidth << endl;}
private:
    double itsLength;
    double itsWidth;
};
int main(){
    Rectangle r1,r2(2,3);
    r1.show();
    r2.show();

    return 0;
}
