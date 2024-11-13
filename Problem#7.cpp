// Problem#7.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Number\
Then Print the “Half of the <Number> is <???>”.

#include <iostream>
#include <string>
using namespace std;

int readNumber(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    return number;
}

float halfNumber(int number){
    float halfNumber = 0;
    halfNumber = (float)number / 2;

    return halfNumber;
}

void printHalfNumber(int number){
    string result = "Half od " + to_string(number) + " is " + to_string(halfNumber(number));
    cout << result << endl;
}

int main()
{
    
   printHalfNumber(readNumber());

    return 0;
}