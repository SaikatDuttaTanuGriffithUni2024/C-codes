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
            if(col==1||row==n||row==col){
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    getch();
}
