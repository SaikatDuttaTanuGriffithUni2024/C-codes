#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n,col,row;

    cout << "Enter N:" << endl;

    cin >> n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout << col;
        }
        cout << endl;
    }
    for(row=n-1; row>=1; row--){
        for(col=1;col<=row;col++){
                cout << col;

        }
        cout << endl;
    }
    getch();
}
