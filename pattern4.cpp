#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n,row,col;

    cout << "Enter the number of row:\t" << endl;

    cin >> n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
                if(row%2==0)
                    cout << 0;

                else
                    cout << 1;
        }
        cout << endl;
    }
    getch();
}
