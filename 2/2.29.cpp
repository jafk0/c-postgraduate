//
// Created by xy on 2021/8/19.
//
#include "iostream"

using namespace std;

int main(){
    int score;
    cout << "what's your score?" << endl;
    cin >> score;
    if(score < 60&&score >= 0){
        cout << "差";
    } else if (score < 80){
        cout << "中";
    } else if (score < 90){
        cout << "良";
    } else if (score <= 100){
        cout << "优";
    }

    return 0;
}
