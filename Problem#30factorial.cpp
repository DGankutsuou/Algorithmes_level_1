// Problem#30.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate factorial of N!

#include <iostream>
using namespace std;

int readPositiveNumber(string message){
    int number = 0;
    cout << "*********************\n";
    do{
        cout << message;
        cin >> number;
    }while(number < 0);

    return number;
}

int factorial_of_N_usingForStatment(int n){
    int fact = 1;
    for(int counter = n; counter > 1; counter--){
        fact *= counter;
    }
    return fact;
}
int factorial_of_N_usingWhileStatment(int n){
    int fact = 1;
    int counter = n;
    while( counter > 1){
        fact *= counter;
        counter--;
    }
    return fact;
}

int factorial_of_N_usingDoWhileStatment(int n){
    int fact = 1;
    int counter = n;
    if(counter == 0)
        return fact;
    else{
        do{
            fact *= counter;
            counter--;
        }while(counter > 1);
        return fact;
    }
}

void printResults(int number){
    cout << "The factorial of N is: " << number << endl;
}

int main()
{
    int number = readPositiveNumber("Enter a positive number: ");
    printResults(factorial_of_N_usingForStatment(number));
    printResults(factorial_of_N_usingWhileStatment(number));
    printResults(factorial_of_N_usingDoWhileStatment(number));

    return 0;
}