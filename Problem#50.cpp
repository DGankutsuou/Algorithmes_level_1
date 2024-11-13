// Problem#50.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234,\
then show the balance\
to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.\
Only allow user to enter the PIN 3 times, if fails, print “Card is locked!”\
Assume User Balance is 7500.\
Input\
1234\
5151\
Outputs\
Your Balance is: 7500\
Wrong PIN

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
    int counter;
    counter = 0;
    do{
        pin_code = read_pin_code();
        if(pin_code == "1234")
            return true;
        else
            if(counter < 2){
                cout << "Wrong PIN, you have " << 2 - counter << " more ";
                if(counter < 1){
                    cout << "tries" << endl;
                }else{
                    cout << "try" << endl;
                }
            }
            counter++;
    }while(pin_code != "1234" && counter < 3);
    return 0;
}

int main()
{
    if(login())
        cout << "Your balance is: 7500$" << endl;
    else
        cout << "Your card has been blocked, call your bank for help" << endl;
    
    return 0;
}