#include <iostream>

#include <conio.h>

using namespace std;

main ()

{
    int num1, num2, num3, num4;

    cout << "Enter the 1st number: \t" << endl;

    cin >> num1;

    cout << "Enter the 2nd number: \t" << endl;

    cin >> num2;

    cout << "Enter the 3rd number: \t" << endl;

    cin >> num3;

    cout << "Enter the 4th number: \t" << endl;

    cin >> num4;

    int sum = num1 + num2 + num3 + num4;

    cout << "Sum is :\t" << sum;

    getch ();
}
