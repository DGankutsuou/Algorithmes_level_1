// Problem#47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct St_loan_installment
{
    float loan_amount, monthly_paiment, total_months;
};

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

St_loan_installment read_loan_installment()
{
    St_loan_installment loan_installment;
    loan_installment.loan_amount = read_positive_number("Enter the loan amount: ");
    loan_installment.monthly_paiment = read_positive_number("Enter the monthly paiment: ");

    return loan_installment;
}

float total_months_calculator(St_loan_installment loan_installment)
{
    loan_installment.total_months = loan_installment.loan_amount / loan_installment.monthly_paiment;
    return loan_installment.total_months;
}

int main()
{
    float total_months;
    total_months  = total_months_calculator(read_loan_installment());
    cout << "The total months is: " << total_months << endl;

    return 0;
}