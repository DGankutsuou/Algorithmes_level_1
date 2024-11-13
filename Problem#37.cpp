// Problem#37.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to read numbers from user and sum them, keep reading until the user enters -99\
then print the Sum on screen.

#include <iostream>
#include <string>
using namespace std;

float read_number(string message)
{
    float number = 0;
    cout << message;
    cin >> number;

    return number;
}

float sumer(){
    float sum = 0;
    float number = 0;
    int counter = 1;
    do{
        number = read_number("Enter number " + to_string(counter) + " (-99 will stop the program): ");
        if(number == -99){
            break;
        }
        sum += number;
        counter++;
    }while(number != -99);
    return sum;
}

int main()
{
    float sum;
    sum = sumer();

    cout << "Sum is: " << sum << endl;

    return 0;
}