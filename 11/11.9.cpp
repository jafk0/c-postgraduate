//
// Created by xy on 2021/9/5.
//
//b.cpp
#include <fstream>
#include "strstream"
#include <stdlib.h>

using namespace std;

int main()
{

    strstream textfile;
    {
        ifstream in("1.txt");
        textfile << in.rdbuf();
    }
    ofstream out("1.txt");

    const int bsz = 100;
    char buf[bsz];
    int line = 0;
    while(textfile.getline(buf, bsz)) {
        out.setf(ios::right, ios::adjustfield);
        out.width(1);
        out << ++line << ". " << buf << endl;
    }

    return 0;
}
