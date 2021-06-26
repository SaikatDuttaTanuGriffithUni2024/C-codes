#include<iostream>
#include<conio.h>
using namespace std;

main()

{
    int fact = 1, i , n;

    cout << "Enter any number:" << endl;

    cin >> n;

    for ( i =1 ; i <=n ; i++)
    {
        fact = fact * i;
    }
    cout << "The factorial is = " << fact << endl;

    getch();
}
