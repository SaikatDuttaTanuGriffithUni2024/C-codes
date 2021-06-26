#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, row, col;

    cout << "Enter N:" << endl;

    cin >> n;

    for(row=1; row<=n; row++){
        for(col=1; col <=n-row; col++){
            //printing space

            cout << " " ;
        }


        for(col=1;col<=row;col++){
            //printing numbers

            cout <<'#' ;
        }

        cout << endl;
    }
    getch();

}
