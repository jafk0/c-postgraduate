//
// Created by xy on 2021/9/5.
//
#include "iostream"

using namespace std;
#include "fstream"

int main(){
    ofstream file("11.3-test1.txt");
    file << "已成功写入文件！";
    file.close();

    return 0;
}
