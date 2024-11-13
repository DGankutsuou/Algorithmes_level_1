// Problem#25.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter :\
• Age\
If age is between 18 and 45 print “Valid Age” otherwise print\
“Invalid Age” and re-ask user to enter a valid age.\
Note: You should keep asking user to enter a valid age until\
s/she enters it.

#include <iostream>
using namespace std;

unsigned short readAge(){
    unsigned short number;
    cout << "Enter your age between 18 and 45: ";
    cin >> number;
    return number;
}

bool validateNumberInRange(unsigned short number, int minimum, int maximum){
    return (number >= minimum && number < maximum);
}
int readNumberUntilInRange(int minimum, int maximum) {
    int number = 0;
    do {
        number = readAge();
    } while(!validateNumberInRange(number, 18, 45));

    return number;
}

void printResult(unsigned short age) {
        cout << age << " is a valid Age" << endl;
}

int main()
{

    printResult(readNumberUntilInRange(18, 45));

    return 0;
}

/*#include <iostream>
using namespace std;

unsigned short readNumberInRange(int minimum, int maximum) {
    unsigned short number;
    do {
        cout << "Enter your age (it mudt be between " << minimum << " and " << maximum << "): ";
        cin >> number;
    } while(number < minimum || number >= maximum);
    return number;
}

void printResult(unsigned short age) {
        cout << age << " is a valid Age" << endl;
}

int main()
{

    printResult(readNumberInRange(18, 45));

    return 0;
}*/