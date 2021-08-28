//
// Created by xy on 2021/8/27.
//
#include "iostream"

using namespace std;

class Employee{
private:
    char *name;
    char *address;
    char *city;
    int post;
public:
    Employee(char *na,char *add,char *ci,int p):name(na),address(add),city(ci),post(p){};
    void change_name(char *);
    void display();

};
void Employee::change_name(char *n) {
    name = n;
}
void Employee::display() {
    cout << "name:" << name << endl;
    cout << "address:" << address << endl;
    cout << "city:" << city << endl;
    cout << "post:" << post << endl;
}
int main(){
    Employee e("mike","china","songyuan",138000);
    e.display();
    e.change_name("allen");
    e.display();

    return 0;
}
