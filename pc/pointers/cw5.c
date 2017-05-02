#include<stdio.h>
main()
{
	int i, *ptr;
	
	ptr = &i;
	
	scanf("%d",ptr);		//
	
	printf("%d\n",*ptr);
	
	return 0;
}