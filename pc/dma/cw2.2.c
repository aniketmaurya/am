#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*ptr,n;
	
	printf("enter the no. of locations\n");
	scanf("%d",&n);
	
	ptr=(int*)malloc  (7*sizeof(int));
	
	for(i=0;i<n;i++)
		scanf("%d",ptr+i);
	
	for(i=0;i<n;i++)
		printf("%d\t",*(ptr+i));
	
} 