//Author: Christopher Rey Almaraz

#include "student.h"
#include <iostream>
#include<string>

using namespace std;

void student::setName(string first, string last)
{
    firstName=first;
    lastName=last;
}
string student::fullName()
{
    string fullName= firstName;
    fullName.append(" ");
    fullName.append(lastName);
    return fullName;
}
