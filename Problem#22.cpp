// Problem#22.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate circle area Inscribed in an Isosceles Triangle,\
then print it on the screen.

#include <iostream>
#include <cmath>
using namespace std;

void readTriangleData(float& a, float& b){

    cout << "Enter side: ";
    cin >> a;
    cout << "Enter base: ";
    cin >> b;
}

float circleAreaByITriangle(float a, float b){
    const float PI = 3.1415926;
    return (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

void printResult(float area){
    cout << "\nCircle area = " << area << endl;
}

int main()
{
    float a = 0;
    float b = 0;
    readTriangleData(a, b);
    printResult(circleAreaByITriangle(a, b));

    return 0;
}
