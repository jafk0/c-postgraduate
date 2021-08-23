//
// Created by xy on 2021/8/23.
//
#include "iostream"

using namespace std;

class Rect{
public:
    Rect(int h,int w):height(h),weith(w){}
    double getArea() const{
        return height*weith;
    }

    double getHeight() const {
        return height;
    }

    void setHeight(double height) {
        Rect::height = height;
    }

    double getWeith() const {
        return weith;
    }

    void setWeith(double weith) {
        Rect::weith = weith;
    }

private:
    double height;
    double weith;
};
int main(){
    Rect rect(3,5);
    cout << "Area is :" << rect.getArea() << endl;


    return 0;
}
