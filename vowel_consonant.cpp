#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    char letter;

    cout << "Enter the letter:" << endl;

    cin >> letter;

    letter = tolower(letter);

    if ( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        cout << "The letter is a Vowel!";

    else
        cout << "The letter is a Consonant!";

    getch();
}

