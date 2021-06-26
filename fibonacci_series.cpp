#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int first=0, second=1,count=0,fibo,number;

    cout << "Enter the range:\t" << endl;

    cin >> number;

    while(count<number)
    {
        if(count<=1)
            fibo=count;

        else{
            fibo=first+second;
            first=second;
            second=fibo;
        }
        cout << "Fibonacci series :\t" <<fibo << endl;

        count++;
    }

    getch();
}
