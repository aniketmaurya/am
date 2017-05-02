#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int p;
    cin >> p;
    int i,x=0,y=0;
    x=p/2;
    if(n%2!=0){
        if(p%2==0)
            y=(n-p+1)/2;
        else y=(n-p)/2-1;
    }
    else{
        if(p%2==0)
            y=(n-p+1)/2;
        else y=(n-p)/2;
    }
    
    if(x>y)
        cout<<y;
    if(y>x)
        cout<<x;
    if(x==y)
        cout<<x;
    
    return 0;
}