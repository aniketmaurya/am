#include<stdio.h>
void swap(int *x,int *y);
main()
{
	int a,b;
	printf("enter the no.s\n");
	scanf("%d  %d",&a,&b);
	swap(&a,&b);					//a aur b ka address save hoga x or y pe
	printf("value of a =%d and b= %d",a,b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}