#include "student.h"
#include <iostream>
#include <string.h>
using namespace std;

void Student::setName(const char* s)
{
    if(s == nullptr)
        cout << "name is null" << endl;
    else{
        memcpy(name, s, sizeof(name));
    }
    return;
}

void Student::setBorn(int b)
{
    if(b <= 0)
        cout << "born number is error" <<endl;
    else
     born = b;

    return;
}


void Student::printInfo()
{
    cout << "name is " << name << endl;
    cout << "born is " << born << endl;
}
