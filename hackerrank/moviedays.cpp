#include <iostream>
using namespace std;

void reverse(int &x){
    int r;
    r=x%10;
    x=x/10+r*10;
}

int main() {

    int i,j,k,x,days=0;
    cin>>i>>j>>k;
    for(;i<=j;i++)
    {
        x=i;
        reverse(x);
        //cout<<x<<endl;
        if((x-i)%k==0)
            days++;
    }
    cout<<days;
    
    return 0;
}
