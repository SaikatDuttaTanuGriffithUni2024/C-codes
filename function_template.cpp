#include<iostream>
#include<conio.h>
using namespace std;

template <class Saikat>

Saikat add(Saikat a, Saikat b)
{
    return a+b;
}

int main()
{
    cout << add(10,20) << endl;

    getch();
}
