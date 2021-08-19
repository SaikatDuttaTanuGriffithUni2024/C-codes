#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()

{
    while(1)
    {
        int Random_number, Guessing_number;

        cout << "Enter the guessing number between 1 to 5 : " << endl;

        cin >> Guessing_number;

        Random_number = rand()%5 + 1;

        if ( Guessing_number == Random_number )
        {
            cout << "You have won ! " << endl << endl;
        }
        else{

            cout << "You have lost! Try again." << endl << endl;
        }

        getch();
    }
}
