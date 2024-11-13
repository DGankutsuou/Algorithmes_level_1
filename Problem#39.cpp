// Problem#39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float read_positive_number(string message)
{
    float number = 0;
    do
    {
        cout << message;
        cin >> number;
    }while(number < 0);

    return number;
}

float remainder_calculator(float total_bill, float cash_paid)
{
    return cash_paid - total_bill;
}

int main()
{
    float total_bill, cash_paid, remainder;
    total_bill = read_positive_number("Enter the Total Bill: ");
    cash_paid = read_positive_number("Enter the Cash Paid: ");
    remainder = remainder_calculator(total_bill, cash_paid);

    cout << "Remaider is: " << remainder << endl;

    return 0;
}