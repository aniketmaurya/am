#include<stdio.h>	//print sum of digits of a given no.
	
int main()

{


int n,i,s,r;


printf("input\n\n");
scanf("%d",&n);



for(s=0;n>0;n=n/10)
{
r=n%10;
s=s+r;


}
printf("output:%d",s);



}
