#include<iostream>
#include<conio.h>
using namespace std;

template <class Saikat1, class Saikat2>

Saikat2 add(Saikat1 a, Saikat2 b)
{
    return a+b;
}

int main()
{
    cout << add(10,20.5) << endl;

    getch();
}

