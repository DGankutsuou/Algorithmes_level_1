// Problem#24.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter :\
• Age\
If age is between 18 and 45 print “Valid Age” otherwise print “Invalid Age”

#include <iostream>
using namespace std;

unsigned short readAge(){
    unsigned short age;
    cout << "Enter your age: ";
    cin >> age;

    return age;
}

bool validateNumberInRange(unsigned short number, int minimum, int maximum){
    return (number >= minimum && number < maximum);
}

void printResult(unsigned short age){
    if(validateNumberInRange(age, 18, 45)){
        cout << "Valid Age" << endl;
    }else{
        cout << "Invalid Age" << endl;
    }
}

int main()
{

    printResult(readAge());

    return 0;
}