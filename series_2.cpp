#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

main()
{
    int number, sum = 0;

    cout << "Enter the last number:\t" << endl;

    cin >> number;

    for (int i =2; i<=number; i=i+2){
        sum = sum + i;
    }
    cout << "The Sum is:\t" << sum;

    getch();
}
