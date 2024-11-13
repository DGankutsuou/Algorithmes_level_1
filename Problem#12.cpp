// Problem#12.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Number1 , Number2\
Then Print the Max Number

#include <iostream>
using namespace std;

void readNumbers(int number[2]){
    cout << "Enter the first number: ";
    cin >> number[0];
    cout << "Enter the second number: ";
    cin >> number[1];
}

int whichIsMax(int number[2]){
    if(number[0] > number[1])
        return number[0];
    else if(number[0] < number[1])
        return number[1];
    else
        return 0;
}

void printResult(int max){
    cout << "The max number is: " << max;
}

int main()
{
    int number[2];
    readNumbers(number);
    printResult(whichIsMax(number));

    return 0;
}