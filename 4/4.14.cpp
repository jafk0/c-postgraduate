//
// Created by xy on 2021/8/23.
//
#include "iostream"

using namespace std;

class tree{
public:
    explicit tree(int age):ages(age){};
    void grow(int years){
        ages += years;
    }
    void age() const{
        cout << "age:" << ages << endl;
    }

private:
    int ages;
};

int main(){
    tree t(5);
    t.age();
    t.grow(3);
    t.age();

    return 0;
}
