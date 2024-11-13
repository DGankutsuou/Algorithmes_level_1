// Problem#42.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate the task duration in seconds and print it on screen\
 Given the time duration of a task in the number of days, hours, minutes, and seconds,.

#include <iostream>
#include <cmath>
using namespace std;

struct St_task_duration
{
    float seconds, minutes, hours, days;
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

bool validate_number_in_range(float number, float minimum, float maximum)
{
    return (number >= minimum && number <= maximum);
}

float read_number_until_in_range(float minimum, float maximum, string message)
{
    float number = 0;
    do {
        number = read_positive_number(message);
    } while(!validate_number_in_range(number, minimum, maximum));

    return number;
}

St_task_duration read_task_duration()
{
    St_task_duration task_duration;
    task_duration.days = read_positive_number("Enter the number of the days: ");
    task_duration.hours = read_number_until_in_range(0, 59, "Enter the number of the hours: ");
    task_duration.minutes = read_number_until_in_range(0, 59, "Enter the number of the minutes: ");
    task_duration.seconds = read_number_until_in_range(0, 59, "Enter the number of the seconds: ");

    return task_duration;
}

float total_seconds_calculator(St_task_duration task_duration)
{
    return task_duration.seconds + task_duration.minutes * 60 + task_duration.hours * 60 * 60 + task_duration.days * 24 * 60 * 60;
}

int main()
{
    float total_seconds;
    total_seconds = total_seconds_calculator(read_task_duration());

    cout << "The total seconds is: " << total_seconds << endl;

    return 0;
}