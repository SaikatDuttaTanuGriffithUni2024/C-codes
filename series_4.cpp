#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

main()
{
    float number, sum = 0;

    cout << "Enter the last number:\t" << endl;

    cin >> number;



    for (float i =1.5; i<=number; i++){
        sum = sum + i;
    }
    cout << "The Sum is:\t" << sum;

    getch();
}
