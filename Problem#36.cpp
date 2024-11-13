// Problem#36.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Number1\
• Number 2\
• OperationType\
Then perform the calculation according to the Operation Type as follows :\
• “ + ” : add the two numbers.\
• “ - ” : Subtract the two numbers.\
• “ * ” : Multiply the two numbers.\
• “ / ” : Divide the two numbers.

#include <iostream>
using namespace std;

enum En_operation_type {add = '+', subtract = '-', multiply = '*', divide = '/'};

float read_number(string message)
{
    float number = 0;
    cout << message;
    cin >> number;

    return number;
}

En_operation_type read_operation_type()
{
    char operation_type;
    do{
        cout << "Enter the operation type ('+', '-', '*', '/'): ";
        cin >> operation_type;
    }while(operation_type != '+' && operation_type != '-' && operation_type != '*' && operation_type != '/');

    return (En_operation_type) operation_type;
}

float calculator(float number1, float number2, En_operation_type operation_type)
{
    switch(operation_type)
    {
        case En_operation_type::add:
            return number1 + number2;
        case En_operation_type::subtract:
            return number1 - number2;
        case En_operation_type::multiply:
            return number1 * number2;
        case En_operation_type::divide:
            return number1 / number2;
        default:
            return 0;
    }
}

int main()
{
    float number1, number2, result;
    En_operation_type operation_type;
    number1 = read_number("Enter number 1: ");
    number2 = read_number("Enter number 2: ");
    operation_type = read_operation_type();
    result = calculator(number1, number2, operation_type);

    cout << "\nResult = " << result << endl;

    return 0;
}
