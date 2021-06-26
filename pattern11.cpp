#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, col,row;

    cout << "Enter the number of row:" << endl;

    cin >> n;

    char ch;

    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            cout << ch << char(col+64);
        }
        cout << endl;
    }
    getch();
}
