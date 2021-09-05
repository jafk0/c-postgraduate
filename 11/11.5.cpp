//
// Created by xy on 2021/9/5.
//
#include "iostream"
#include "fstream"

using namespace std;

int main(){
    ofstream file("11.3-test1.txt",ios::app);
    file << "已成功添加字符！";
    file.close();
    ifstream file1("11.3-test1.txt");
    char temp;
    while (file1.get(temp)){
        cout << temp;
    }
    file1.close();

    return 0;
}
