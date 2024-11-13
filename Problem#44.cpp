// Problem#44.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Day\
Then print the day as follows:\
• 1 Print Sunday\
• 2 Print Monday\
• 3 Print Tuesday\
• 4 Print Wednesday\
• 5 Print Thursday\
• 6 Print Friday\
• 7 Print Saturday\
• Otherwise print “Wrong Day” and ask the use to enter the day again.\
Example Inputs:\
6\
Outputs\
Its Friday

#include <iostream>
using namespace std;

enum En_day { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

void days_of_week_menu(){
    cout << "*************************\n";
    cout << "         Days Menu          \n";
    cout << "*************************\n";
    cout << "1- Monday\n";
    cout << "2- Tuesday\n";
    cout << "3- Wdnesday\n";
    cout << "4- Thursday\n";
    cout << "5- Friday\n";
    cout << "6- Saterday\n";
    cout << "7- Sunday\n";
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

En_day read_day_of_week() {
    days_of_week_menu();
    unsigned short day_number;
    day_number = read_number_until_in_range(1, 7, "Enter a day number from the menu: ");

    return (En_day)day_number;
}

string get_day_of_week(En_day day) {
    switch (day) {
    case En_day::Monday:
        return "Day is Monday";

    case En_day::Tuesday:
        return "Day is Tuesday";

    case En_day::Wednesday:
        return "Day is Wednesday";

    case En_day::Thursday:
        return "Day is Thursday";

    case En_day::Friday:
        return "Day is Friday";

    case En_day::Saturday:
        return "Day is Saturday";

    case En_day::Sunday:
        return "Day is Sunday";

    default:
        return "Unkown error";
    }
}

int main() {

    cout << get_day_of_week(read_day_of_week()) << endl;

    return 0;
}