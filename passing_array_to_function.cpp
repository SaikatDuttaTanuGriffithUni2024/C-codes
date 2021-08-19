#include<iostream>
#include<conio.h>
using namespace std;

void displayArray(int number[], int ArraySize)
{
    for(int i =0; i<=4;i++){

        cout << number[i]<<endl;
    }
}
int main()
{
    int number[5] = {10,20,30,40,50};

    displayArray(number,5);

    getch();
}
