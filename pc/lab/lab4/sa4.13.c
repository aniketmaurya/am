#include<stdio.h>   
	
int main()

{


int n,i,j;
char ch='A';


printf("input\n\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%c  ",ch);

ch=ch+1;


}
ch='A';
printf("\n");

}

}
