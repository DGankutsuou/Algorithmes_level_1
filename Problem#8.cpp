// Problem#8.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Mark\
Then Print the “PASS” if mark >=50, otherwise print “Fail”

#include <iostream>
using namespace std;

enum EnPassFail {Pass = 1, Fail};

int readMark(){
    unsigned short mark;
    cout << "*****************************\n";
    cout << "Enter your mark: ";
    cin >> mark;
    cout << "*****************************" << endl;

    return mark;
}

EnPassFail checkMark(int mark) {
    if(mark >= 50){
        return EnPassFail::Pass;
    }else{
        return EnPassFail::Fail;
    }
}

bool isPass(int mark){
    if(mark == EnPassFail::Pass){
        return true;
    }else{
        return false;
    }
}

void printResult(bool isPass){
    if(isPass)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;
    
}

int main()
{
    printResult(isPass(checkMark(readMark())));
    
    return 0;
}