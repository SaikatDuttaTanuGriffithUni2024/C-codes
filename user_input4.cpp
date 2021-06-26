#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

main()

{
    float a,b;

    cout << showpoint;

    cout<<setprecision(4);

    cout << "enter two numbers:\t"<<endl;

    cin >> a >> b;

    float sum = a + b;

    cout <<  setw(20) << "Sum is :\t" << sum << endl;

    float sub = a - b;
    cout<<noshowpoint;
    cout <<setw(20)<< "Sub is :\t" << sub << endl;

    float mul = a * b;
    cout<<showpoint;
    cout <<setw(20) <<"Mul is :\t" << mul << endl;

    double div = (float) a / (float) b;

    cout <<setw(20)<< "Div is :\t" << div;

    getch ();
}
