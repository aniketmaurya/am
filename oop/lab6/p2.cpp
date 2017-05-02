#include<iostream>
using namespace std;
class temp{
    float f,c;
    
    public:
    void getdata(){
    cout<<"enter value of farehiet and celcius";
    cin>>f>>c;
    }
    void display(){
    if(f==0)
    {
        f=c*9/5+32;
    }
    if(c==0)
    {
        c=(f-32)*5/9;
    }
    cout<<"celcius: "<<c<<endl<<"farehiet: "<<f<<endl;
    }
    };
int main()
{
    temp t;
    t.getdata();
    t.display();
}


