//
// Created by xy on 2021/8/27.
//
#include "iostream"

using namespace std;

int index(const char *s,const char *t){
    int i,j,k;
    for(i = 0; s[i] != '\0'; i++)
    {
        for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if (t[k] =='\0')
            return i;
    }
    return -1;
}

int main(){
    cout << index("dasgvjhasjh","gvj") << endl;

    return 0;
}
