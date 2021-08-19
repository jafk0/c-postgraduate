//
// Created by xy on 2021/8/19.
//
#include "iostream"

using namespace std;

int main(){
    char flag;
    //(1)
//    while(1){
//        cout << "Menu:A(dd) D(elete) S(ort) Q(uit), Select one:";
//        cin >> flag;
//        if(flag == 'A'){
//            cout << "add over" << endl;
//            continue;
//        } else if (flag == 'D'){
//            cout << "delete over" << endl;
//            continue;
//        } else if (flag == 'S'){
//            cout << "sort over" << endl;
//            continue;
//        } else if (flag == 'Q'){
//            cout << "quit" << endl;
//            break;
//        }
//    }
    //(2)
    while (1){
        cout << "Menu:A(dd) D(elete) S(ort) Q(uit), Select one:";
        cin >> flag;
        switch (flag) {
            case 'A':
                cout << "add over" << endl;
                break;
            case 'D':
                cout << "delete over" << endl;
                break;
            case 'S':
                cout << "sort over" << endl;
                break;
            case 'Q':
                cout << "quit" << endl;
                exit(0);
                break;
            default:
                ;
        }
    }

    return 0;
}
