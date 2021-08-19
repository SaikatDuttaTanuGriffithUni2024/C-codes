#include<iostream>
#include<conio.h>
using namespace std;

int x = 10; // global variable

int main()
{
    int x = 23; // local variable

    cout << :: x << endl;

    getch();
}
