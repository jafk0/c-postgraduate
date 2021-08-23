//
// Created by xy on 2021/8/23.
//
#include "iostream"

using namespace std;

class Dog{
private:
    int age;
    double weight;
public:
    Dog(int age,double weight):age(age),weight(weight){};

    void setAge(int age) {
        Dog::age = age;
    }

    void setWeight(double weight) {
        Dog::weight = weight;
    }

    int getAge() const {
        return age;
    }

    double getWeight() const {
        return weight;
    }

};

int main(){
    Dog d(5,23);
    cout << "Age:" << d.getAge() << '\t' << "Weight:" << d.getWeight();

    return 0;
}
