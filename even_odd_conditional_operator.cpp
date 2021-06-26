#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int number;

    cout << "Enter the number:\t" << endl;

    cin >> number;

    (number%2==0)?cout << number << "is even" : cout << number << "is odd";



    getch();
}
