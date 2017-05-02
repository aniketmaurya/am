#include<stdio.h>
int main()
{
int a[5],b[5],c[10],i,j,t,max;
printf("enter the values for a\n");

for(j=0;j<5;j++)
scanf("%d",&a[j]);

printf("\n\nenter the values for  b\n");

for(j=0;j<5;j++)
scanf("%d",&b[j]);

for(i=0;i<5;i++)
c[i]=a[i];

for(j=5,i=0;j<10,i<5;j++,i++)
c[j]=b[i];


for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{

if(c[i]>c[j])
{
t=c[j];
c[j]=c[i];
c[i]=t;
}

}}
printf("\n\n ascending order of merged item is\n\n");

for(i=0;i<10;i++)
printf("%d\t",c[i]);
printf("\n\n\n\n");
}

