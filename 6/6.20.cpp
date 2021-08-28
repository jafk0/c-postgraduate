//
// Created by xy on 2021/8/27.
//
#include "iostream"

using namespace std;

class SimpleCircle{
private:
    int *itsRadius;
public:
    int getR(){return *itsRadius;};
    SimpleCircle(int r){
        itsRadius = new int (r);
    }
    SimpleCircle(){
        itsRadius = new int (1);
    }
    ~SimpleCircle(){delete itsRadius;};
};
int main(){
    SimpleCircle sc(5),sc1;
    cout << sc.getR() << endl;
    cout << sc1.getR() << endl;
    return 0;
}
