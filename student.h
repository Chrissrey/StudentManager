//Author:Christopher Rey Almaraz

#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<iostream>
#include<string>

using namespace std;

//define my class

class student
{
    private:
    string firstName;
    string lastName;
             
    public:
    void setName(string, string);
    string fullName();
};
#endif
