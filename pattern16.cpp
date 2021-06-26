#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, row, col;

    cout << "Enter N:" << endl;

    cin >> n;

    for(row=n; row>=1; row--){
        for(col=1;col<=n-row;col++){
            cout << " ";
        }
        for(col=1;col<=row;col++){
                if (row%2==0){
                cout<<'0';
                }
                else
                    cout << '1';
        }
        cout << endl;
    }
    getch();
}
