#include<iostream>
using namespace std;
int main()
{
	int n,m,k,i,j,c=0,d=0,min,max;
	cin>>n>>m;
	int a[n],b[m];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	max=a[0];
	min=b[0];
	for(i=0;i<n;i++)
		if(a[i]>max)
			max=a[i];
	for(i=0;i<m;i++)
		if(b[i]<min)
			min=b[i];
	for(k=max;k<=min;k++)
	{
		c=0;
		for(j=0;j<n;j++)
			for(i=0;i<m;i++)
				if(k%a[j]==0&&b[i]%k==0)
					c++;
		if(c==n*m)
		d++;
		else continue;
	
	}
	cout<<d;
}