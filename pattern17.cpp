#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, row,col;

    cout << "Enter N:"<< endl;

    cin >> n;

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            cout << "*";
        }
        cout << endl;
    }
    getch();
}
