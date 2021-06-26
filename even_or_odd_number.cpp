#include<iostream>
#include<conio.h>
using namespace std;

main()

{
    int num1, num2;

    cout << "Enter two numbers:" <<endl;

    cin >> num1 >> num2;

    if (num1 % 2 == 0)
        cout << "Number 1 is even!" << endl;
    else
        cout << "Number 1 is odd!" << endl;
    if (num2 % 2 == 0)
        cout << "Number 2 is even!" << endl;
    else
        cout << "Number 2 is odd!" << endl;

    getch();
}
