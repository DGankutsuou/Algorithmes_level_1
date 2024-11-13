// Problem#43.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program that inputs the number of seconds and changes it to days, hours, minutes, and seconds

#include <iostream>
#include <cmath>
using namespace std;

struct St_task_duration
{
    int number_of_seconds, number_of_minutes, number_of_hours, number_of_days;
};

int read_positive_number(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    }while(number < 0);

    return number;
}

St_task_duration seconds_to_task_duration(int total_seconds)
{
    St_task_duration task_duration;
    const int SECONDS_PER_DAY = 24 * 60 * 60;
    const int SECONDS_PER_HOUR = 60 * 60;
    const int SECONDS_PER_MINUTES = 60;
    int remainder = 0;

    task_duration.number_of_days = floor(total_seconds / SECONDS_PER_DAY);
    remainder = total_seconds % SECONDS_PER_DAY;
    task_duration.number_of_hours = floor(remainder / SECONDS_PER_HOUR);
    remainder = remainder % SECONDS_PER_HOUR;
    task_duration.number_of_minutes = floor(remainder / SECONDS_PER_MINUTES);
    remainder = remainder % SECONDS_PER_MINUTES;
    task_duration.number_of_seconds = remainder;

    return task_duration;
}

void print_task_duration(St_task_duration task_duration)
{
    cout << "\n" << task_duration.number_of_days << ":"
    << task_duration.number_of_hours << ":" 
    << task_duration.number_of_minutes << ":"
    << task_duration.number_of_seconds << endl;
}

int main()
{
    int total_seconds;
    total_seconds = read_positive_number("Enter the total seconds: ");
    print_task_duration(seconds_to_task_duration(total_seconds));

    return 0;
}