#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
    int n,i,j,x=0,s=0,k=0,y[10];
    int m;
    cin >> n >> m;
    int a[n],b[m];
    
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    
    x=a[i];
    
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
    {   
           x=a[i];
        if((x%a[i]==0)&&(b[j]%x==0))
           {
		
            y[k]=x;
            k++;
        }
      }
    }
    x=b[i];
    for(i=0;i<n;i++, x=b[i])
		for(j=0;j<m;j++)
			if((x%a[i]==0)&&(b[j]%x==0))
				y[k]=x;
		
//	for(i=0;i<=k;i++)	
  //  s=s+sizeof(y[k]);
	cout<<k/2<<endl;
    //cout<<s/4<<endl;
    return 0;
}