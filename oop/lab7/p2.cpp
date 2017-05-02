#include<iostream>
using namespace std;
class Distance{
    public:
    float m,cm;
    public:
    Distance(float a=0 , float b=0)
    {
        m=a;cm=b;
    }
    Distance operator++ (int)
    {
        if (cm>=100)
        {
            m=m+1;
            cm=cm-100;
        }
        return Distance(m,cm);
    }
    void display()
    {
        cout<<"\nmembers are m= "<<m<<" cm = "<<cm<<endl;
    }
    
};
int main()
{
    Distance d1(2,200),d2(8,100),d3(5,55);
    d1++;
    d2++;
    d1.display();
    d2.display();
    d3.display();
}

