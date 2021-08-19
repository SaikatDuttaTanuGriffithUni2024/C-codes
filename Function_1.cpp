//Write a program to print the sum of two numbers entered by user by defining your own function.

#include<iostream>
#include<conio.h>
using namespace std;

int sum(int x, int y)

{

    int add = x + y;

    cout << "Sum is = " << add << endl;
}

int main()
{
    sum(20,30);

    sum(90,110);

    getch();
}
