#include<iostream>
#include<conio.h>
using namespace std;

main()

{
    float num1,num2;

    cout << "Enter the two numbers:" << endl;

    cin >> num1 >> num2;

    if (num1 > num2)
        cout << "Number one is the greatest among these two!";

    else
        cout << "Number two is the greatest among these two!";

    getch();
}
