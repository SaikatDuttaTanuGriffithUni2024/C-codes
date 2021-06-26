#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, row,col;

    cout << "Enter N:" ;

    cin >> n;

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(row==1||row==n||col==1||col==n){
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    getch();
}
