// Problem#17.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to calculate triangle area then print it on the screen.

#include <iostream>
using namespace std;

struct StTriangle{
    float height;
    float base;
};

StTriangle readHeightAndBase(){
    StTriangle triangle;

    cout << "Enter triangle height: ";
    cin >> triangle.height;
    cout << "Enter triangle base: ";
    cin >> triangle.base;

    return triangle;
}

float triangleAreaByHeightAndBase(StTriangle triangle){
    return (triangle.base / 2) * triangle.height;
}

void printResult(float area){
    cout << "\ntriangle area = " << area << endl;
}

int main()
{
    printResult(triangleAreaByHeightAndBase(readHeightAndBase()));

    return 0;
}
