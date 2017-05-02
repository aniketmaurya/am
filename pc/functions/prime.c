#include<stdio.h>   //prime no.
	void prime(int n);
	void prime(int n)
{

int i,p=1;


   
for(i=2;i<=(n/2);i++)
   {


	if(n%i==0)
	{
p=0;
}	
	else
	p=1;
   } 

	if (p==1)
	printf("prime\n\n");
	else
	printf("not prime\n\n");

}
main()
{
	int k;
	scanf("%d",&k);
	prime(k);
	
}