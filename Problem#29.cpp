// Problem#29.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to Sum even numbers from 1 to N.

#include <iostream>
using namespace std;

enum en_Odd_Even {Odd = 1, Even};

unsigned int readNumber(){
    unsigned int number;
    cout << "*********************\n";
    cout << "Enter N: ";
    cin >> number;

    return number;
}

en_Odd_Even check_number_odd_or_even(unsigned int number){
    if(number % 2 != 0)
        return en_Odd_Even::Odd;
    else
        return en_Odd_Even::Even;
}

unsigned int sumEvenNumbersFrom1toN_usingForStatment(unsigned int n){
    unsigned int oddNumbers = 0;
    for(unsigned int counter = 1; counter <= n; counter++){
        if(check_number_odd_or_even(counter) == en_Odd_Even::Even){
            oddNumbers += counter;
        }
    }
    return oddNumbers;
}
unsigned int sumEvenNumbersFrom1toN_usingWhileStatment(unsigned int n){
    unsigned int oddNumbers = 0;
    unsigned int counter = 1;
    while( counter <= n){
        if(check_number_odd_or_even(counter) == en_Odd_Even::Even){
            oddNumbers += counter;
        }
        counter++;
    }
    return oddNumbers;
}

unsigned int sumEvenNumbersFrom1toN_usingDoWhileStatment(unsigned int n){
    unsigned int oddNumbers = 0;
    unsigned int counter = 1;
    do{
        if(check_number_odd_or_even(counter) == en_Odd_Even::Even){
            oddNumbers += counter;
        }
        counter++;
    }while(counter <= n);
    return oddNumbers;
}

void printResults(unsigned int number){
    cout << "Sum odd numbers: " << number << endl;
}

int main()
{
    unsigned int number = readNumber();
    printResults(sumEvenNumbersFrom1toN_usingForStatment(number));
    printResults(sumEvenNumbersFrom1toN_usingWhileStatment(number));
    printResults(sumEvenNumbersFrom1toN_usingDoWhileStatment(number));

    return 0;
}