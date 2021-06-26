#include<iostream>
#include<conio.h>
using namespace std;

main()

{

    float length, breadth;

    cout << "Enter the length and breadth of the shape:" << endl;

    cin >> length >> breadth;

    if (length == breadth)
        cout << "The shape is a Square!";

    else
        cout << "The shape is not a Square!";

    getch();
}
