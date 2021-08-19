#include<iostream>
#include<conio.h>
using namespace std;

class shape
{
public:

    double dim1, dim2;

    shape(double dim1,double dim2)
    {
        this -> dim1 = dim1;

        this -> dim2 = dim2;
    }
    double area ()
    {
        return 0;
    }
};

class Triangle : public shape

{
public:
    Triangle(double dim1,double dim2)
    :shape(dim1,dim2)
    {

    }
    double area()
    {
        cout <<"Area of triangle is " << " " << 0.5 * dim1 * dim2 << endl;
    }
};
class Rectangle : public shape

{
public:
    Rectangle(double dim1,double dim2)
    :shape(dim1,dim2)
    {

    }

    double area()
    {
        cout <<"Area of Rectangle is " << " " <<  dim1 * dim2 << endl;
    }
};

int main()
{
    Triangle t(10,20);

    Rectangle r(20,30);

    t.area();

    r.area();

}
