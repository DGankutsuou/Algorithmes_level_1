// Problem#2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the use to enter his/her name and print it on screen.

#include <iostream>
#include <string>
using namespace std;

string readName() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    return name;
}

void printName(string name){
    
    cout << "Your name is " << name << endl;
}

int main()
{
    printName(readName());

    return 0;
}
