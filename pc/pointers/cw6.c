#include<stdio.h>
main()
{
	int arr[5];
	int *p=arr;		//*p=arr is equiv. to *p=&arr[0]
	scanf("%d",p);
	printf("%d\n",*(p+1));		//printf("%d\n",p+1) will give address
	
}