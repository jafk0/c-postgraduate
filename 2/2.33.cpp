//
// Created by xy on 2021/8/20.
//
#include "iostream"

using namespace std;

struct Time {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
};

int main(){
    Time time;
    cout << "连续输入年月日时分秒：" << endl;
    cin >> time.year;
    cin >> time.month;
    cin >> time.day;
    cin >> time.hour;
    cin >> time.minute;
    cin >> time.second;
    cout << time.year << '.' << time.month << '.' << time.day << '-' << time.hour << ':' << time.minute << ':' << time.second << endl;

    return 0;
}
