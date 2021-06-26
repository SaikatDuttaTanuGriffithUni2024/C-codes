#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

main()
{
    int i,number,mul=1;

    cout << "Enter any positive number:\t" << endl;

    cin >> number;

    for(i=2;i<=number;i++){

        mul = mul * pow(i,2);
    }
    cout << "Result is:\t" << mul;

    getch();
}

