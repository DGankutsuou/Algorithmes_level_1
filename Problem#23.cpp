// Problem#23.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate circle area circle described around an arbitrary triangle,\
then print it on the screen.

#include <iostream>
#include <cmath>
using namespace std;

void readTriangleData(float& a, float& b, float& c){

    cout << "Enter triangle side a: ";
    cin >> a;
    cout << "Enter triangle side b: ";
    cin >> b;
    cout << "Enter triangle base: ";
    cin >> c;
}

float circleAreaByATriangle(float a, float b, float c){
    float P, T;
    const float PI = 3.14;
    P = (a + b + c) / 2;
    T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
    return PI * pow(T, 2);
}

void printResult(float area){
    cout << "\nCircle area = " << area << endl;
}

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    readTriangleData(a, b, c);
    printResult(circleAreaByATriangle(a, b, c));

    return 0;
}
