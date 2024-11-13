// Problem#46.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to print all letters from A to Z and from a to z.

#include <iostream>
using namespace std;

void printCapitalLetters(){
    
    for(int capitalLetter = 65; capitalLetter <= 90; capitalLetter++){
        cout << char(capitalLetter);
        if(capitalLetter != 90){
            cout << ", ";
        }
    }
    cout << endl;
}

void printSmallCaseLetters(){
    for(int capitalLetter = 97; capitalLetter <= 122; capitalLetter++){
        cout << char(capitalLetter);
        if(capitalLetter != 122){
            cout << ", ";
        }
    }
    cout << endl;
}

int main()
{
    printCapitalLetters();
    printSmallCaseLetters();

    return 0;
}