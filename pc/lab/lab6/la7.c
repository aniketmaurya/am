#include<stdio.h>   //ascending sorting
    
int main()

{
int a[10],i,j,n,k,t;
printf("input the no. of terms\n\t");
scanf("%d",&n);

printf("\ninput the terms\n\n");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nPlease wait \n\nProcessing...\n\n");

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{

if(a[i]>a[j])
{
t=a[j];
a[j]=a[i];
a[i]=t;
}



}
}
printf("The ascending order of no.s entered is:\n");
for(i=0;i<n;i++)
printf("%d < ",a[i]);
}

