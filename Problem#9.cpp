// Problem#9.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Number1, Number2, Number3\
Then Print the Sum of entered numbers

#include <iostream>
using namespace std;

void readNumbers(int& number1, int& number2, int& number3){
    
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the third number: ";
    cin >> number3;
}

int sumOfThreeNumbers(int number1, int number2, int number3){
    return number1 + number2 + number3;
}

void printResult(int sum){
    cout << "The sum of the three numbers is: " << sum << endl;
}

int main()
{
    int number1, number2, number3;
    readNumbers(number1, number2, number3);
    printResult(sumOfThreeNumbers(number1, number2, number3));

    return 0;
}