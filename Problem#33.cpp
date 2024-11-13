// Problem#33.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write a program to ask the user to enter:\
• Grade\
Then print the grade as follows:\
• 90 – 100 Print A\
• 80 – 89 Print B\
• 70 – 79 Print C\
• 60 – 69 Print D\
• 50 – 59 Print E\
• Otherwise Print F

#include <iostream>
using namespace std;

unsigned short readGrade(){
    unsigned short grade;
    cout << "***********************\n";
    do{
        cout << "Enter your grade between 0 and 100: ";
        cin >> grade;
    }while(grade < 0 || grade > 100);

    return grade;
}

char classification(unsigned short grade){
    if(grade >= 90)
        return 'A';
    else if(grade >= 80)
        return 'B';
    else if(grade >= 70)
        return 'C';
    else if(grade >= 60)
        return 'D';
    else if(grade >= 50)
        return 'E';
    else
        return 'F';
    
}

int main()
{
    char grade;
    grade = classification(readGrade());
    cout << "Your grade is: " << grade << endl;

    return 0;
}