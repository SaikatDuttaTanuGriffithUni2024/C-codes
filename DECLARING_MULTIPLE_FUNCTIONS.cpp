#include<iostream>

#include<conio.h>

using namespace std;

void addition (int, int);

void subtraction (int, int);

void multiplication (int, int);

void division (int, int);

int main()

{
    addition (10,20);

    subtraction (20,20);

    multiplication (30,40);

    division (90,31);

    cout << "All functions have been called";

    getch();
}

void addition(int a, int b)

{
    int sum = a + b;

    cout << "Sum = " << sum << endl;
}

void subtraction(int a, int b)

{
    int subtraction = a - b;

    cout << "Subtraction = " << subtraction << endl;
}

void multiplication (int a, int b)

{
    int multiplication = a * b;

    cout << "Multiplication = " << multiplication << endl;
}

void division(int a, int b)

{
    float division = (float) a / b;

    cout << "division = " << division << endl;
}

