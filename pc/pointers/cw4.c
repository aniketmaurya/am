#include<stdio.h>
main()
{
	int arr[5];
	int *q;
	//q=&arr[0];
	q=arr;
	
	scanf("%d",q);
	printf("%d\n",*q);
	
}