// Problem#19.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate circle area through diameter, then print it on the screen.

#include <iostream>
#include <cmath>
using namespace std;

float readDiameter(){
    float diameter;

    cout << "Enter circle diameter: ";
    cin >> diameter;

    return diameter;
}

float circleAreaCalculator(float diameter){
    const float PI = 3.1415926;
    return (PI * pow(diameter, 2)) / 4;
}

void printResult(float area){
    cout << "\nCircle area = " << area << endl;
}

int main()
{
    printResult(circleAreaCalculator(readDiameter()));

    return 0;
}