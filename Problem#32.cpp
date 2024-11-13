// Problem#32.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Number\
• M\
Then Print the Number^M

#include <iostream>
using namespace std;

int readNumber(){
    int number;
    cout << "*********************\n";
    cout << "Enter the number: ";
    cin >> number;
    return number;
}

int readPower(){
    int power;
    cout << "*********************\n";
    cout << "Enter the power: ";
    cin >> power;
    return power;
}

int powering(int number, int power){
    int powered = number;
    if (power == 0){
        return 1;
    }else{
        for (int counter = 1; counter < power; counter++)
        {
            powered *= number;
        }
        return powered;
    }
}

void print_result(int powered){
    cout << "Result is: " << powered << endl;
}

int main()
{

    print_result(powering(readNumber(), readPower()));
    cout << "***Using the function directaly***" << endl;
    print_result(powering(3, 4));

    return 0;
}