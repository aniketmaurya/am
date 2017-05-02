#include<stdio.h>   //perfect no.
	
int main()

{


int n,i,s=0,d;


printf("input\n\n");
scanf("%d",&n);

	for(i=1;i<n;i++)
{
	if(n%i==0)
{
	s=s+i;
}

}
if(s==n)
printf("perfect no.");

else printf("not perfect no.");

}
