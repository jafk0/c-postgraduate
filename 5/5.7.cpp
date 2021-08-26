//
// Created by xy on 2021/8/26.
//
#include "iostream"

using namespace std;

class Cat{
public:
    Cat(){
        HowManyCats++;
    }
    static int GetHowMany(){
        return HowManyCats;
    }
private:
    static int HowManyCats;
};
int Cat::HowManyCats = 0;
int main(){
    Cat cat1,cat2,cat3;
    cout << "The nums of cats:" << cat1.GetHowMany() << endl;
    Cat cat4,cat5;
    cout << "After, the nums of cats:" << cat1.GetHowMany() << endl;
    return 0;
}