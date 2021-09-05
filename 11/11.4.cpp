//
// Created by xy on 2021/9/5.
//
#include "iostream"

using namespace std;
#include "fstream"

int main(){
    ifstream file("11.3-test1.txt");
    char temp;
    while (file.get(temp)){
        cout << temp;
    }
    file.close();

    return 0;
}
