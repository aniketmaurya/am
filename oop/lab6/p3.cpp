#include<iostream>
using namespace std;

class integer
{
    int *arr,n;
    public:
        
    void getdata()
    {
        int i;
        cout<<"enter the no.s in array\n";
        for(i=n;i>=0;i--)
        {
            cin>>arr[i];
        }
     }
     
    integer(int N=0)
    {
        n=N;
        arr=new int[n];
    }
    
    void count()
    {
        int even=0,odd=0,i=0;
        for(i=0;i<=n;i++)
        {
        if(arr[i]%2==0)
        {
            even++;
        }
        else odd++;
        }
        cout<<"no of odd is "<<odd<<"\n no of even is "<<even<<endl;
        
    }
};
int main()
{
    integer a(5);
    a.getdata();
    a.count();
}
