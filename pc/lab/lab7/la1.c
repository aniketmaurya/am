#include<stdio.h>
int main()
{
int a[10],i,j,max;
printf("enter the nos.\n");

for(i=0;i<10;i++)
scanf("%d",&a[i]);

max=a[0];
for(i=0;i<10;i++)
{
	if(a[i]>max)
	max=a[i];
}
for(i=0;i<10;i++)
if(a[i]==max)
a[i]=0;

max=a[0];
for(i=0;i<10;i++)
{
	if(a[i]>max)
	max=a[i];
}

printf("\n\nthe second gratest no. is %d\n\n",max);
}
