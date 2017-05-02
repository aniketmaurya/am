#include<iostream>
using namespace std;
class Complex;

class Complex
{
    float real,imag;

    public:

    void display()
    {
        cout<<endl<<real<<" + "<<imag<<" i \n";
    }
    Complex add(Complex c)
    {
        return Complex((real+c.real),(imag+c.imag));
    }
};
int main()
{
    Complex c1(5,7),c2(3,3),c3;
    c3=c1.add(c2);
    c3.display();
}

