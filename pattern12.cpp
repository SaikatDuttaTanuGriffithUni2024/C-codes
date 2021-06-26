#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, col,row;

    cout << "Enter N:" << endl;

    cin >> n;

    for(row=nm;row>=1;row--){
        for(col=1;col<=row;col++){
            cout <<'#' << row;
        }
        cout << endl;
    }
    getch();
}
