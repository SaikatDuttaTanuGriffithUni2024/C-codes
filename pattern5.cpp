#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, col, row;

    char ch;

    cout << "Enter the number of row:" << endl;

    cin >> n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout <<ch<<char(col+64);
        }
        cout << endl;
    }
    getch();
}
