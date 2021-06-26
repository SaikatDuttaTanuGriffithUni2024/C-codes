#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    char ch;

    cout << "Enter the letter:\t" << endl;

    cin >> ch;

    if (ch >=97 && ch <=122)
        cout << "This letter is Lowercase!";

    else
        cout << "This letter is Uppercase!";

    getch();

}
