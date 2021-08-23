//
// Created by xy on 2021/8/23.
//
#include "iostream"
#include <cstring>

using namespace std;

class Date{
private:
    int year;
    int month;
    int day;
public:
//    Date();
    Date(int year, int month, int day) : year(year), month(month), day(day) {}


    int getYear() const {
        return year;
    }

    void setYear(int year) {
        Date::year = year;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int month) {
        Date::month = month;
    }

    int getDay() const {
        return day;
    }

    void setDay(int day) {
        Date::day = day;
    }

    void show(){
        cout << year << "." << month << "." << day << " " << endl;
    }
};
class Person{
public:
    Person(int id, bool sex, int y,int m, int d, char *per) : id(id), sex(sex), date(y,m,d) {
        strcpy(this->per,per);
    };

    Person(const Person &p): date(p.date){
        id = p.id;
        sex = p.sex;
        strcpy(per,p.getPer());
    };


    void show();

    void setId(int id);

    void setSex(bool sex);

    void setDate(const Date &date);

    int getId() const;

    bool isSex() const;

    const Date &getDate() const;

    const char *getPer() const;

private:
    int id;
    bool sex;
    Date date;
    char per[19];
};

void Person::setId(int id) {
    Person::id = id;
}

void Person::setSex(bool sex) {
    Person::sex = sex;
}

void Person::setDate(const Date &date) {
    Person::date = date;
}

int Person::getId() const {
    return id;
}

bool Person::isSex() const {
    return sex;
}

const Date &Person::getDate() const {
    return date;
}

const char *Person::getPer() const {
    return per;
}

void Person::show() {
    cout << "id:" << id << endl;
    if (sex){
        cout << "sex:boy" << endl;
    } else{
        cout << "sex:girl" << endl;
    }
    cout << "birthday:";
    date.show();
    cout << "iden:" << per << endl;



}
int main(){
    char p[19] = "220220222209901341";
    Person person(2,true,2000,1,8,p);
    person.show();

    return 0;
}
