#include<stdio.h>   //prime no.
	
int main()

{

int n,i,p=1;


   printf("input\n\n");
   scanf("%d",&n);

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
	printf("prime");
	else
	printf("not prime");

}
