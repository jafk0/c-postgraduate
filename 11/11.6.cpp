//
// Created by xy on 2021/9/5.
//
#include "iostream"
#include "fstream"
using namespace std;

class dog{
private:
    int age;
    double weight;
public:
    dog();
    dog(int a,double w):age(a),weight(w){};
    void show(){
        cout << "age:" << age << endl;
        cout << "weight:" << weight << endl;
    }

};
int main(){
    dog d(10,5);
    ofstream file("dog");
    file.write((char*) &d,sizeof(d));
    file.close();
    d.show();
    dog d1(1,1);
    d1.show();
    ifstream file1("dog");
    file1.read((char*) &d1,sizeof(d1));
    d1.show();
    file1.close();

    return 0;
}
