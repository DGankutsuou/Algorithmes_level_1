// Problem#21.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate circle area along the circumference, then print it on the screen.

#include <iostream>
#include <cmath>
using namespace std;

float readCircumference(){
    float circumference;

    cout << "Enter circumference: ";
    cin >> circumference;

    return circumference;
}

float circleAreaCalculator(float L){
    const float PI = 3.1415926;
    return (L * L) / (PI * 4);
}

void printResult(float area){
    cout << "\nCircle area = " << area << endl;
}

int main()
{
    printResult(circleAreaCalculator(readCircumference()));

    return 0;
}