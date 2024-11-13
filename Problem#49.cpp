// Problem#49.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the\
balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.\
Assume User Balance is 7500.

#include <iostream>
using namespace std;

string read_pin_code()
{
    string pin_code;
    cout << "Enter you PIN code: ";
    cin >> pin_code;

    return pin_code;
}

bool login()
{
    string pin_code;
    do{
        pin_code = read_pin_code();
        if(pin_code == "1234")
            return true;
        else
            cout << "Wrong PIN" << endl;
    }while(pin_code != "1234");
    return 0;
}

int main()
{
    if(login())
        cout << "Your balance is: 7500$" << endl;
    
    return 0;
}