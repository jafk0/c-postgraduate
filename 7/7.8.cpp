//
// Created by xy on 2021/8/29.
//
#include "iostream"
#include "string.h"

using namespace std;

class Document{
private:
    char *name;
public:
    Document(){};
    Document( char *name ){
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void PrintNameOf(){cout << name << endl;}; // Print name.
};
class Book:public Document{
private:
    int PageCount;
public:
    Book(){};
    Book(char* name,int page): Document(name),PageCount(page){}
};

int main(){
    Document* dm = new Book("hello",100);
    dm->PrintNameOf();

    return 0;
}
