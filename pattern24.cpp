#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, col,row;

    cout << "Enter N:";

    cin >> n;

    for(row=n;row>=1;row--){
        for(col=1;col<=n-row;col++){
            cout << " ";
        }
        for(col=1;col<=row;col++){
            cout << "# ";
        }
        cout << endl;
    }
    getch();
}
