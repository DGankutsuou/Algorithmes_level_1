// Problem#14.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Number1\
• Number2\
Then print the two numbers , then Swap the two numbers and print them

#include <iostream>
using namespace std;

void readNumbers(int &firstNumber, int &secondNumber){
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
}

void printNumbers(int firstNumber, int secondNumber){
    
    cout <<"\nThe first number is: "<< firstNumber << "\n";
    cout <<"The second number is: "<< secondNumber << endl;
}

void swapNumbers(int &firstNumber, int &secondNumber){
    int temp;
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
}

int main()
{
    int firstNumber = 0, secondNumber = 0;
    readNumbers(firstNumber, secondNumber);
    printNumbers(firstNumber, secondNumber);
    swapNumbers(firstNumber, secondNumber);
    printNumbers(firstNumber, secondNumber);

    return 0;
}
