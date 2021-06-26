#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
    float base, vertical_height, area_of_ellipse;

    cout<<setprecision(10);

    cout << "Enter the base & vertical height:\t" << endl;

    cin >> base;

    cin >> vertical_height;

    area_of_ellipse = 3.1416 * base * vertical_height;

    cout << " Area of Ellipse is:\t" << area_of_ellipse;

    getch();
}
