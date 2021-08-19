//
// Created by xy on 2021/8/19.
//
#include "iostream"

using namespace std;

int main(){
    char israin;
    while (1){
        cout << "Is it rain?(Y or N)" << endl;
        cin >> israin;
        if(israin == 'Y'){
            cout << "It's raining." << endl;
        } else{
            cout << "It isn't raining." << endl;
        }
    }
    return 0;
}
