#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    for (int i=1; i<=5; i++)
    {
        int random = rand()%5;

        cout << "Random Number = " << random << endl  ;

    }


    getch();
}
