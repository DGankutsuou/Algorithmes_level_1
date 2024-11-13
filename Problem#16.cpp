// Problem#16.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate rectangle area through diagonal and side area of\
rectangle and print it on the screen.

#include <iostream>
#include <cmath>
using namespace std;

struct StRectangle{
    float side;
    float diagonal;
};

StRectangle readSideAreaAndDiagonal(){
    StRectangle rectangle;

    cout << "Enter rectangle area side: ";
    cin >> rectangle.side;
    cout << "Enter rectangle diagonal: ";
    cin >> rectangle.diagonal;

    return rectangle;
}

float rectangleAreaBySideAreaAndDiagonal(StRectangle rectangle){
    return rectangle.side * sqrt(pow(rectangle.diagonal, 2) - pow(rectangle.side, 2));
}

void printResult(float area){
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    printResult(rectangleAreaBySideAreaAndDiagonal(readSideAreaAndDiagonal()));

    return 0;
}
