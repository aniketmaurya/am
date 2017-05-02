#include<stdio.h>
int main()
{
int a[3][3],b[3][3],c[3][3],i,j;
printf("enter the values for matrix a\n");

for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);

for(i=0;i<3;i++)
for(j=0;j<3;j++)
if(i!=j)
b[i][j]=a[j][i];
else b[i][j]=a[i][j];

printf("\n\nthe matrix a is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("the transpose matrix a is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",b[i][j]);
printf("\n");
}

}