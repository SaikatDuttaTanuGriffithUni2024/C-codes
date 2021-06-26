#include<iostream>
#include<conio.h>
using namespace std;

main()

{
    int age;

    cout << "Enter your age:" << endl;

    cin >> age;

    if (age > 18)
        cout << "You are eligible to apply for a National ID Card";
    else
        cout << "You are not eligible to apply for a National ID Card";
    getch();
}
