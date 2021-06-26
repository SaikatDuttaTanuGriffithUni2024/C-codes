#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n,row,col;

    cout << " Enter the number of rows:" << endl;

    cin >> n;

    char ch;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout << ch << char(row+64);
        }
        cout << endl;
    }
    getch();
}
