#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    double number, sum=0, i;

    cout << "Enter the last number:\t" << endl;

    cin >> number;

    for (i=1;i<=number;i++){

        sum = sum + (1/i);
    }
    cout << "The Sum is:\t" << sum;
    getch();
}
