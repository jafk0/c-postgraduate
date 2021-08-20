//
// Created by xy on 2021/8/20.
//
#include "iostream"

using namespace std;
enum weekday{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(){
    weekday wd = Thursday;
    cout << wd << endl;
    int i = wd;
    cout << i << endl;

    wd = (weekday)6;
    //不可直接常量赋值
    //wd = 6;
    cout << wd << endl;
    wd = weekday (2);
    cout << wd << endl;
    return 0;
}
