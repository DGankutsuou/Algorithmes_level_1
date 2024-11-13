// Problem#3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter a number, then\
Print “ODD” if its odd, Or “Even” if its even.

#include <iostream>
using namespace std;

enum enNumberType {odd = 1, even};

int readNumber(){
    int number;
    cout << "Enter the number: ";
    cin >> number;

    return number;
}

enNumberType checkNumberType(int number){
    int result = number % 2;
    if(result == 0){
        return enNumberType::even;
    }else{
        return enNumberType::odd;
    }
}

void printNumberType(enNumberType numberType){

    if (numberType == enNumberType::even) {
        cout << "This number is even" << endl;
    }else {
        cout << "This number is odd" << endl;
    }
        
}

int main()
{
    printNumberType(checkNumberType(readNumber()));
    

    return 0;
}