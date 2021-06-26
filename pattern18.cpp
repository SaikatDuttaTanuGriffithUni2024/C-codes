#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, row,col;

    cout << "Enter N:"<< endl;

    cin >> n;

    char ch;

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            cout <<ch <<char(col+64);
        }
        cout << endl;
    }
    getch();
}
