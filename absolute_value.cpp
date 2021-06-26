#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int number;

    cout << "Enter a Number:" << endl;

    cin >> number;

    if ( number < 0)
        cout << "Absolute number is:\t" << (-number);
    else
        cout << "Absolute Number is:\t" << number;

    getch();
}
