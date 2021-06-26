#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, row,col;

    cout << "Enter the number of rows:" << endl;

    cin >> n;

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout <<'#';
        }
        cout<<endl;
    }
    getch();
}
