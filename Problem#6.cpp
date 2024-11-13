// Problem#6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• First Name\
• Last Name\
Then Print Full Name on screen.\

#include <iostream>
using namespace std;

struct StFullName{
    string firstName;
    string lastName;
};

StFullName readInfo(){
    StFullName person;
    cout << "Please enter your first name: ";
    cin >> person.firstName;
    cout << "Please enter your last name: ";
    cin >> person.lastName;

    return person;
}

string creatFullName(StFullName person){
    string fullName = " ";
    fullName = person.firstName + " " + person.lastName;
    
    return fullName;
}

void printFullName(string fullName){
    cout << "\nYour full name is " << fullName << endl;
}

int main()
{
    printFullName(creatFullName(readInfo()));

    return 0;
}