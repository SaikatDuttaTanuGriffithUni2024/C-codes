#include<iostream>
#include<conio.h>
using namespace std;

main()

{
    int n, col,row,count=0;

    cout << "Enter N:"<< endl;;

    cin >> n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout <<++count;
        }
        cout<<endl;
    }
    getch();
}
