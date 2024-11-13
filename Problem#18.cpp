// Problem#18.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate circle area then print it on the screen.

#include <iostream>
#include <cmath>
using namespace std;

void readRay(float& ray){

    cout << "Enter circle ray: ";
    cin >> ray;
}

float circleAreaCalculator(float r){
    const float PI = 3.1415926;
    return PI * pow(r, 2);
}

void printResult(float area){
    cout << "\nCircle area = " << area << endl;
}

int main()
{
    
    float ray;

    readRay(ray);
    printResult(circleAreaCalculator(ray));

    return 0;
}
