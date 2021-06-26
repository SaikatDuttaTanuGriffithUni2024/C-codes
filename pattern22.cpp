#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, row,col;

    cout << "Enter N:"<< endl;

    cin >> n;

    char ch;



    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout << " ";
        }
        for(col=1;col<=2*row-1;col++){
            cout<<"#";
        }

        cout << endl;
    }

    for(row=n-1;row>=1;row--){
        for(col=1;col<=n-row;col++){
            cout << " ";
        }
        for(col=1;col<=2*row-1;col++){
            cout<<"#";
        }
        cout<<endl;
    }



    getch();
}

