// Problem#35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct St_piggy_bank_contenet {
    int pennies, nickels, dimes, quarters, dollars;
};

St_piggy_bank_contenet read_piggy_bank_contenet(){
    St_piggy_bank_contenet piggy_bank_contenet;
    cout << "************************\n";
    cout << "Enter your pennies: ";
    cin >> piggy_bank_contenet.pennies;
    cout << "Enter your nickels: ";
    cin >> piggy_bank_contenet.nickels;
    cout << "Enter your dimes: ";
    cin >> piggy_bank_contenet.dimes;
    cout << "Enter your quarters: ";
    cin >> piggy_bank_contenet.quarters;
    cout << "Enter your dollars: ";
    cin >> piggy_bank_contenet.dollars;

    return piggy_bank_contenet;
}

int calculate_total_pennies(St_piggy_bank_contenet piggy_bank_contenet){
    int total_pennies = 0;
    total_pennies = piggy_bank_contenet.pennies +
    piggy_bank_contenet.nickels * 5 +
    piggy_bank_contenet.dimes * 10 +
    piggy_bank_contenet.quarters * 25 +
    piggy_bank_contenet.dollars * 100;
    return total_pennies;
}

int main()
{
    int total_pennies;
    float total_dollars;
    total_pennies = calculate_total_pennies(read_piggy_bank_contenet());
    
    cout << "Total Pennies is: " << total_pennies << "\n";
    cout << "Total Dollars is: " << (float)total_pennies / 100 << endl;
    
    return 0;
}