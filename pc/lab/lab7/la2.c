#include<stdio.h>
int main()
{
int a[10],i,j,t;
printf("enter the values in the array\n");

for(i=0;i<5;i++)
scanf("%d",&a[i]);

for(i=0;i<5/2;i++)
{
t=a[i];
a[i]=a[5-i-1];
a[5-i-1]=t;
}

printf("\nreverse of your input is\n");
for(i=0;i<5;i++)
printf("%d\t",a[i]);











}
