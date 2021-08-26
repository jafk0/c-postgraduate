//
// Created by xy on 2021/8/26.
//
using namespace std;
class X;
class Y{
public:
    void g(X* x);
};
class X{
    friend class Z;
    friend void h(X* x);
    friend void Y::g(X* x);

public:
    void show(){
        cout << i << endl;
    }
    X(){i = 0;};
private:
    int i;
};
void Y::g(X *x) {
    x->i ++;
}
class Z{
public:
    void f(X* x){
        x->i += 5;
    }
};
void h(X* x){
    x->i += 10;
}
