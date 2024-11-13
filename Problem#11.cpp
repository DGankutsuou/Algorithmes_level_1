// Problem#11.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Mark1, Mark2, Mark3\
Then Print the Average of entered Marks, and print “PASS” if average>=50, otherwise print “FAIL”

#include <iostream>
using namespace std;

enum EnPassFail {Pass = 1, Fail};

void readmarks(int& mark1, int& mark2, int& mark3){
    
    cout << "Enter the first mark: ";
    cin >> mark1;
    cout << "Enter the second mark: ";
    cin >> mark2;
    cout << "Enter the third mark: ";
    cin >> mark3;
}

int sumOfThreemarks(int mark1, int mark2, int mark3){
    return mark1 + mark2 + mark3;
}

float averageOfThreeNumbers(int mark1, int mark2, int mark3){
    float average = (float)sumOfThreemarks(mark1, mark2, mark3) / 3;
    return average;
}

EnPassFail checkAverage(int average) {
    if(average >= 50){
        return EnPassFail::Pass;
    }else{
        return EnPassFail::Fail;
    }
}

void printResult(float average){
    cout << "The average of the three marks is: " << average << endl;
    if(checkAverage(average) == EnPassFail::Pass)
        cout << "You PASSED" << endl;
    else
        cout << "You FAILED" << endl;
    
}

int main()
{
    int mark1, mark2, mark3;
    readmarks(mark1, mark2, mark3);
    printResult(averageOfThreeNumbers(mark1, mark2, mark3));

    return 0;
}