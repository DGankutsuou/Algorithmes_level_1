// Problem#48.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    loan_installment.total_months = read_positive_number("Enter the total months: ");

    return loan_installment;
}

float monthly_paiment_calculator(St_loan_installment loan_installment)
{
    loan_installment.monthly_paiment = loan_installment.loan_amount / loan_installment.total_months;
    return loan_installment.monthly_paiment;
}

int main()
{
    float monthly_paiment;
    monthly_paiment  = monthly_paiment_calculator(read_loan_installment());
    cout << "The monthly paiment is: " << monthly_paiment << endl;

    return 0;
}