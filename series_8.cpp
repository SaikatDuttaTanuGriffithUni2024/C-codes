#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int  i, number, odd=0,even=0;

    cout << "Enter the last number:\t" << endl;

    cin >> number;

    for (i=1;i<=number; i++)
    {
        if(i%2==0)
            even = even + i;
        else
            odd = odd + i;
    }
    cout << "Sum is:\t" << odd-even << endl;

    getch();


}
