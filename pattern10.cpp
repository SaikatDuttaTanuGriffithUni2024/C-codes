#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n,row,col;

    cout << "Enter the number of row:\t" << endl;

    cin >> n;

    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
                if(col%2==0)
                    cout << 0;

                else
                    cout << 1;
        }
        cout << endl;
    }
    getch();
}

