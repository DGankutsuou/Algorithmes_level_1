// Problem#40.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

float fees_calculator(float bill_value)
{
    float total_bill;
    total_bill = bill_value * 1.1;
    total_bill *= 1.16;

    return total_bill;
}

int main()
{
    float bill_value, total_bill;
    bill_value = read_positive_number("Enter the bill value: ");
    total_bill = fees_calculator(bill_value);

    cout << "\nThe bill value is: " << bill_value << endl;
    cout << "The total bill after service fee and sales tax is: " << total_bill << endl;

    return 0;
}