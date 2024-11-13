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

float hours_to_days(float number_of_hours)
{
    return (float)number_of_hours / 24;
}

float hours_to_weeks(float number_of_hours)
{
    return (float)number_of_hours / 24 / 7;
}

float days_to_weeks(float number_of_days)
{
    return (float)number_of_days / 7;
}

int main()
{
    float number_of_hours, number_of_days, number_of_weeks;
    number_of_hours = read_positive_number("Enter the number of hours: ");
    number_of_days = hours_to_days(number_of_hours);
    number_of_weeks = hours_to_weeks(number_of_hours);

    cout << "\nThe number of hours is: " << number_of_hours << endl;
    cout << "The number of days is: " << number_of_days << endl;
    cout << "The number of weeks through hours is: " << number_of_weeks << endl;
    
    number_of_weeks = days_to_weeks(number_of_days);
    cout << "The number of weeks through days is: " << number_of_weeks << endl;

    return 0;
}