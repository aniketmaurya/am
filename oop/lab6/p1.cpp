#include<iostream>
using namespace std;

class university
{    
    protected:
    string uname,address;
    public:
    void getuni(){
    cout<<"enter university name and address\n";
    cin>>uname>>address;
    }
    
};

class AICTE
{
    protected:
    int rank;
    public:
    void getrank(){
    
    cout<<"\n enter ranking\n";
    cin>>rank;
    }
};

class college:private university
{
    protected:
    string cname,regno,caddress;
    public:
    void getcollege(){
    cout<<"\n enter college name regno. and address\n";
    cin>>cname>>regno>>caddress;
    }
};
class status: protected college, protected AICTE
{
    protected:
    string strength;
    int passprcnt;
    public:
    void getstatus(){
    cout<<"enter strength and pass percent";
    cin>>strength>>passprcnt;
    }
    void display(){
    cout<<"pass percent is"<<passprcnt<<endl<<"strength is "<<strength<<endl;
    }
    
    
};
int main()
{
    university u;
    AICTE a;
    college c;
    status s;
    u.getuni();
    a.getrank();
    c.getcollege();
    s.getstatus();
    s.display();
}
