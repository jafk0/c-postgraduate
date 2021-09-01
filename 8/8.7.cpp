//
// Created by xy on 1/9/2021.
//
#include "iostream"

using namespace std;

class Counter{
public:
    Counter():itsVal(0){}
    Counter(unsigned short initialValue):itsVal(initialValue){};
    unsigned short GetItsVal() const{return itsVal;}
    Counter operator+(const Counter &counter){
        return Counter(itsVal+counter.GetItsVal());
    };
    void show(){cout << itsVal << endl;}

private:
    unsigned short itsVal;
};

int main(){
    Counter c(1),c2(3);
    Counter b = c+c2;
    b.show();

    return 0;
}
