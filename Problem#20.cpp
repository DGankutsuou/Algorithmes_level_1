// Problem#20.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate Circle area inscribed in a square,\
then print it on the screen.

#include <iostream>
#include <cmath>
using namespace std;

float readSquarSide(){
    float squarSide;

    cout << "Enter squar side: ";
    cin >> squarSide;

    return squarSide;
}

float circleAreaCalculator(float squarSide){
    const float PI = 3.1415926;
    return (PI * pow(squarSide, 2)) / 4;
}

void printResult(float area){
    cout << "\nCircle area = " << area << endl;
}

int main()
{
    printResult(circleAreaCalculator(readSquarSide()));

    return 0;
}