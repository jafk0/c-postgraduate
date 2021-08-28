//
// Created by xy on 2021/8/27.
//
#include "iostream"

using namespace std;
int count(char*);
int main(){
    char a[100];
    gets(a);
    int i = 0;
    int num = 0;
    do {
        if(a[i] >= 'a'&&a[i] <= 'z'){
            num++;
        }
        i++;
    } while (a[i] != '\0');
    cout << num << endl;
    return 0;
}

int count(char *str){
    int i,num=0;
    for (i=0; str[i]; i++)
    { if ( (str[i]>='a' && str[i]<='z') || (str[i]>='A' &&str[i]<='Z') )
        num++;
    }
    return num;
}
