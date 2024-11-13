// Problem#26.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to print numbers from 1 to N.

#include <iostream>
using namespace std;

unsigned int readNumber(){
    unsigned int number;
    cout << "*********************\n";
    cout << "Enter N: ";
    cin >> number;

    return number;
}

void printRangeFrom1toN_usingForStatment(unsigned int n){
    cout << "for statment:" << endl;
    for(unsigned int counter = 1; counter <= n; counter++){
        cout << counter << endl;
    }
}

void printRangeFrom1toN_usingWhileStatment(unsigned int n){
    unsigned int counter = 1;
    cout << "while statment:" << endl;
    while( counter <= n){
        cout << counter << endl;
        counter++;
    }
}

void printRangeFrom1toN_usingDoWhileStatment(unsigned int n){
    unsigned int counter = 1;
    cout << "do while statment:" << endl;
    do{
        cout << counter << endl;
        counter++;
    }while(counter <= n);
}

int main()
{
    unsigned int number = readNumber();
    printRangeFrom1toN_usingForStatment(number);
    printRangeFrom1toN_usingWhileStatment(number);
    printRangeFrom1toN_usingDoWhileStatment(number);

    return 0;
}