// Problem#13.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter 3 numbers:\
• A\
• B\
• C\
Then Print Max number.

#include <iostream>
using namespace std;

void readNumbers(int number[3]){
    cout << "Enter the first number: ";
    cin >> number[0];
    cout << "Enter the second number: ";
    cin >> number[1];
    cout << "Enter the third number: ";
    cin >> number[2];
}

int whichIsMax(int number[3]){
    if(number[0] > number[1]){
        if(number[0] > number[2])
            return number[0];
        else
            return number[2];
    }else if(number[1] > number[0]){
        if(number[1] > number[2])
            return number[1];
        else
            return number[2];
    }else
        return 0;
}

void printResult(int max){
    cout << "The max number is: " << max;
}

int main()
{
    int number[3];
    readNumbers(number);
    printResult(whichIsMax(number));

    return 0;
}