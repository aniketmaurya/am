#include<stdio.h>   
int main()

{

int i,j,k,n,p;

printf("input\n\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{

for(k=1;i+k<n;k++)
printf(" ");

for(j=1;j<=i;j++)
printf("%d",j);

for(j=i-1;j>0;j--)
printf("%d",j);

printf("\n");

}

}

