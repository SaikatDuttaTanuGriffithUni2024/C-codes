#include<iostream>
#include<conio.h>
using namespace std;

main()

{
    int a;

    cout << "Enter a number:" << endl;

    cin >> a ;

    if (a==0){
        cout << "Zero!";
    }
    if (a>0) {
        cout << "Positive!";
    }
    if (a<0){
        cout << "Negative!";
    }

    getch();
}
