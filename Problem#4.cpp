// Problem#4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter his/her:\
• Age\
• Driver license\
Then Print “Hired” if his\her age is grater than 21 and s/he\
has a driver license, otherwise Print “Rejected”

#include <iostream>
using namespace std;

struct StEmployee{
    unsigned short age;
    bool hasDriverLicence;
};

StEmployee readInfo(){
    StEmployee info;
    cout << "***************************************\n";
    cout << "Enter your age: ";
    cin >> info.age;
    cout << "You have a driver licence (0 or 1): ";
    cin >> info.hasDriverLicence;
    cout << "***************************************" << endl;

    return info;
}

bool isAccepted(StEmployee info){
    return (info.age >= 21 && info.hasDriverLicence == true);
}

void printResult(bool isAccepted){

    if(isAccepted == true)
        cout << "You are hired." << endl;
    else
        cout << "You are rejected." << endl;
    
}

int main()
{
    printResult(isAccepted(readInfo()));

    
    return 0;
}