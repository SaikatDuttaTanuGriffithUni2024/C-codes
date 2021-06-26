#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    char ch;

    cout << "Enter the letter:\t" << endl;

    cin >> ch;

    ch = tolower(ch);

    switch(ch)
    {
    case 'a':
        cout << "Vowel!" << endl;
        break;

    case 'e':
        cout << "Vowel!" << endl;
        break;

    case 'i':
        cout << "Vowel!" << endl;
        break;

    case 'o':
        cout << "Vowel!" << endl;
        break;

    case 'u':
        cout << "Vowel!" << endl;
        break;
    default:
        cout << "Consonant!" << endl;

    }
    getch();
}
