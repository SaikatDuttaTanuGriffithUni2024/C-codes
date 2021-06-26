#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

main()
{
    double number, sum=0, i;

    cout << "Enter the last number:\t" << endl;

    cin >> number;

    for (i=1;i<=number;i++){

        sum = sum + pow(i,2);
    }
    cout << "The Sum is:\t" << sum;
    getch();
}

