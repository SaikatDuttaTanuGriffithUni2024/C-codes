#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int number;

    cout << "Enter any number:" << endl;

    cin >> number;


    for (int i=1; i<=10 ; i++){

        cout << number << " X " << i << " = " << (number * i) << endl;
    }
    getch();


}
