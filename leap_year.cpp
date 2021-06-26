#include<iostream>
#include<conio.h>
using namespace std;

int main()

{

    int year;

    cout << "Enter the year:\t" << endl;

    cin >> year;

    if (year%4==0 && year%100!=0 || year%400==0)
        cout << "this is a leap year!!";

    else
        cout << "this is not a leap year";

    getch();
}
