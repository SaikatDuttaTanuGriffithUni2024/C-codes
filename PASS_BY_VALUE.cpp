#include<iostream>
#include<conio.h>
using namespace std;

void display(int num)
{
    num = 20;
}

int main()
{
    int x =10;

    cout << "Value of x before calling the function x = " << x << endl;

    display(x);

    cout << "Value of x after calling the function x = " << x << endl;

    getch();
}
