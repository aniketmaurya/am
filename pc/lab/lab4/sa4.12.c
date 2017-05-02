#include<stdio.h>

int main()

{

int n,i,j,k;


printf("input\n\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(k=1;k+i<=n;k++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}

printf("\n");
}







}



