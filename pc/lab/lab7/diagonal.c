#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[3][3],i,j;
printf("enter the values for matrix a\n");

for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);

printf("\n**********************\n");

printf("\n\nthe matrix a is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("************************\n");
printf("the diagonal of matrix a are  ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
	if(i==j)
printf("%d  ",a[i][i]);
}
}
printf("\n\n\n");
}