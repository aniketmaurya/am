#include <iostream>
using namespace std;

int main(){
    int t,i,j,k,h=1;
    cin >> t;
    int n[t];
    for(i = 0; i< t; i++)
    {
        cin >> n[i];
    }
    for(i=0;i<t;i++)
    {
        for(j=1,k=1;j<=n[i],k<=n[i]/2;j++,k++)
        {    h=h*2;
            h=h+1;
        }
        cout<<h<<endl;
    }
    
    return 0;
}
