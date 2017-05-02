#include<iostream>
using namespace std;
class sample
{
    int a,b,c;
    public:
    sample operator- ()
    {
        a=-a;
        b=-b;
        c=-c;
        return sample(a,b,c);
    }
    sample(int x=0,int y=0,int z=0)
    {
        a=x;b=y;c=z;
    }
    void display()
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
};
int main()
{
    sample s1(5,3,7),s2;
    s1.display();
    s2=-s1;
    cout<<"\ndisplaying s2:\n";
    s2.display();
}

