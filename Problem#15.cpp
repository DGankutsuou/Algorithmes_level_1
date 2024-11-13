// Problem#15.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate rectangle area and print it on the screen.

#include <iostream>
using namespace std;

struct StRectangle{
    int length;
    int width;
};

StRectangle readLengthAndWidth(){
    StRectangle rectangle;

    cout << "Enter rectangle length: ";
    cin >> rectangle.length;
    cout << "Enter rectangle width: ";
    cin >> rectangle.width;

    return rectangle;
}

int rectangleArea(StRectangle rectangle){
    return rectangle.length * rectangle.width;
}

void printResult(int area){
    cout << "\nRectangle area = " << area << endl;
}

int main()
{
    printResult(rectangleArea(readLengthAndWidth()));

    return 0;
}
