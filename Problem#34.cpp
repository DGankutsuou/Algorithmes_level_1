// Problem#34.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• total_sales\
The commission is calculated as one percentage * the total sales amount,\
all you need is to decide which percentage\
to use of the following:\
• > 1000,000  Percentage is 1%\
• > 500K to 1M  Percentage is 2%\
• > 100K – 500K  Percentage is 3%\
• > 50K to 100K  Percentage is 5%\
• Otherwise  Percentage is 0%

#include <iostream>
#include <string>
using namespace std;

void readtotal_sales(float &total_sales){
    cout << "***********************\n";
    cout << "Enter your total_sales: ";
    cin >> total_sales;
    cout << "***********************" << endl;
}

float get_commission_percentage(float total_sales)
{
    if(total_sales >= 1000000)
        return 0.01;
    else if(total_sales >= 500000)
        return 0.02;
    else if(total_sales >= 100000)
        return 0.03;
    else if(total_sales >= 50000)
        return 0.05;
    else
        return 0;
}

string calculate_total_comission(float total_sales){
    return to_string(total_sales * get_commission_percentage(total_sales));
}

int main()
{
    float total_sales;
    readtotal_sales(total_sales);
    cout << "Your comission percentage is: " << get_commission_percentage(total_sales) << "\n";
    cout << "Your total comission is: " << calculate_total_comission(total_sales) << endl;

    return 0;
}