//
// Created by xy on 2021/8/27.
//
#include "iostream"
#include "cstring"

using namespace std;

class MyString{
private:
    char *str;
    int len;
public:
    MyString(const char *);
    MyString();
    ~MyString(){delete str;}
    MyString(const MyString &ms);
    void show();

//    char & operator[](unsigned short offset);
//    char operator[](unsigned short offset) const;
//    MyString operator+(const MyString&);
//    void operator+=(const MyString&);
//    MyString & operator= (const MyString &);
//    unsigned short GetLen()const { return len; }
//    const char * GetMyString() const { return str; }

};
MyString::MyString() {
    str = nullptr;
}
MyString::MyString(const char *c) {
    strcpy(str,c);
}
MyString::MyString(const MyString &ms){

}
void MyString::show() {
    cout << str << endl;
}
//MyString& MyString::operator=(const MyString & rhs)
//{
//    if (this == &rhs)
//        return *this;
//    delete [] str;
//    len=rhs.GetLen();
//    str = new char[len+1];
//    for (int i = 0; str[i] = rhs[i];str[len] = '\0';
//    return *this;
//}
//char & MyString::operator[](unsigned short offset)
//{ i
//            f (offset > len)
//    return str[len-1];
//    else
//    return str[offset];
//} c
//        har MyString::operator[](unsigned short offset) const
//{ i
//            f (offset > len)
//    return str[len-1];
//    else
//    return str[offset];
//} M
//        yString MyString::operator+(const MyString& rhs)
//{ u
//    nsigned short totalLen = len + rhs.GetLen();
//    MyString temp(totalLen);
//    for (unsigned short i = 0; i
//            temp[i] = str[i];
//            for (unsigned short j = 0; j
//                    temp[i] = rhs[j];
//                 temp[totalLen]='\0';
//    return temp;
//} v
//        oid MyString::operator+=(const MyString& rhs)
//{ u
//    nsigned short rhsLen = rhs.GetLen();
//    unsigned short totalLen = len + rhsLen;
//    MyString temp(totalLen);
//    for (unsigned short i = 0; i
//            temp[i] = str[i];
//            for (unsigned short j = 0; j
//                    temp[i] = rhs[i-len];
//                 temp[totalLen]='\0';
//    *this = temp;
//}

int main(){
    MyString ms("hello world!");
    ms.show();
//    MyString ms1(ms);
//    ms1.show();
    return 0;
}
