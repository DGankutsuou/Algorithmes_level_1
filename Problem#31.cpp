// Problem#31.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Number\
Then Print the Number^2 , Number^3 , Number^4

#include <iostream>
using namespace std;

int readNumber(){
    int number;
    cout << "*********************\n";
    cout << "Enter a number: ";
    cin >> number;

    return number;
}

int powering(int number, int power){
    int powered;
    powered = number;
    for(int i = 1; i < power; i++){
        powered *= number;
    }
    return powered;
}

void print_results(int number){
    cout << number << " ^ 2 = " << powering(number, 2) << "\n";
    cout << number << " ^ 3 = " << powering(number, 3) << "\n";
    cout << number << " ^ 4 = " << powering(number, 4) << endl;
}

int main()
{
    print_results(readNumber());

    return 0;
}
