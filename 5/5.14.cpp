//
// Created by xy on 2021/8/26.
//
#include "iostream"

using namespace std;
class Car;
class Boat{
private:
    int weight;
public:
    Boat(int w):weight(w){};
    friend int totalWeight(Car* c,Boat* b);
};
class Car{
private:
    int weight;
public:
    Car(int w):weight(w){};
    friend int totalWeight(Car* c,Boat* b);
};
int totalWeight(Car* c,Boat* b){
    return c->weight+b->weight;
}
int main(){
    Boat b(7);
    Car c(11);
    cout << "total:" << totalWeight(&c,&b) << endl;

    return 0;
}
