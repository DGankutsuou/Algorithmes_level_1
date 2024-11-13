// Problem#45.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Write a program to ask the user to enter:
• Month
Then print the month as follows :
• 1 Print January
• 2 Print February
• 3 Print March
• 4 Print April
• 5 Print May
• 6 Print June
• 7 Print July
• 8 Print August
• 9 Print September
• 10 Print October
• 11 Print November
• 12 December
• Otherwise print “Wrong Month” and ask the use to enter the Month again.
Example Inputs :
11
Outputs
November
*/

#include <iostream>
using namespace std;

enum En_month { January = 1, February, March, April, May, June, July,
 August, September, October, November, December };

void months_of_year_menu(){
    cout << "*************************\n";
    cout << "         months Menu          \n";
    cout << "*************************\n";
    cout << "1- January\n";
    cout << "2- February\n";
    cout << "3- March\n";
    cout << "4- April\n";
    cout << "5- May\n";
    cout << "6- June\n";
    cout << "7- July\n";
    cout << "8- August\n";
    cout << "9- September\n";
    cout << "10- October\n";
    cout << "11- November\n";
    cout << "12- December\n";
    cout << "*************************\n";
}

float read_number_until_in_range(float minimum, float maximum, string message)
{
    float number = 0;
    do {
        cout << message;
        cin >> number;
    } while(number < minimum || number > maximum);

    return number;
}

En_month read_month_of_year() {
    months_of_year_menu();
    unsigned short month_number;
    month_number = read_number_until_in_range(1, 12, "Enter a month number from the menu: ");

    return (En_month)month_number;
}

string get_month_of_year(En_month month) {
    switch (month) {
    case En_month::January:
        return "January";

    case En_month::February:
        return "February";

    case En_month::March:
        return "March";

    case En_month::April:
        return "April";

    case En_month::May:
        return "May";

    case En_month::June:
        return "June";

    case En_month::July:
        return "July";

    case En_month::August:
        return "August";

    case En_month::September:
        return "September";

    case En_month::October:
        return "October";

    case En_month::November:
        return "November";

    case En_month::December:
        return "December";

    default:
        return "Unkown error";
    }
}

int main() {

    cout << get_month_of_year(read_month_of_year()) << endl;

    return 0;
}