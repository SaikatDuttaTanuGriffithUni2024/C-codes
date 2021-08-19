#include<iostream>
#include<conio.h>
using namespace std;

double addition (double, double);

int main()
{

    cout << "Sum is : " << addition(10.23, 11.34) << endl;

    cout << "Sum is : " << addition(23.63,56.24);

    getch();
}

double addition (double a, double b)
{
    double sum = a + b;

    return sum;
}
