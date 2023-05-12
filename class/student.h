#pragma once 



class Student{
public:
    void setName(const char* s);
    void setBorn(int b);
    void printInfo();

private:
    char name[9];
    int born;
     
};



