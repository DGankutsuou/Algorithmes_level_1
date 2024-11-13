#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum En_prime_or_not {Prime = 1, Not_prime};

int read_number(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    }while(number <= 0);

    return number;
}

En_prime_or_not is_prime(int number)
{
    int half = round(number / 2);
    for(int counter = 2; counter <= half; counter++)
    {
        if(number % counter == 0)
            return En_prime_or_not::Not_prime;
    }
    return En_prime_or_not::Prime;
}

void print_number_type(int number)
{
    if(is_prime(number) == En_prime_or_not::Prime)
        cout << "The number " + to_string(number) +  " is prime." << endl;
    else
        cout << "The number " + to_string(number) +  " is not prime." << endl;
}

int main()
{
    int number;
    number = read_number("Enter a number > 0: ");

    print_number_type(number);

    return 0;
}