// Problem#27.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to print numbers from N to 1.

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
    for(unsigned int counter = n; counter >= 1; counter--){
        cout << counter << endl;
    }
}

void printRangeFrom1toN_usingWhileStatment(unsigned int n){
    unsigned int counter = n;
    cout << "while statment:" << endl;
    while( counter >= 1){
        cout << counter << endl;
        counter--;
    }
}

void printRangeFrom1toN_usingDoWhileStatment(unsigned int n){
    unsigned int counter = n;
    cout << "do while statment:" << endl;
    do{
        cout << counter << endl;
        counter--;
    }while(counter >= 1);
}

int main()
{
    unsigned int number = readNumber();
    printRangeFrom1toN_usingForStatment(number);
    printRangeFrom1toN_usingWhileStatment(number);
    printRangeFrom1toN_usingDoWhileStatment(number);

    return 0;
}