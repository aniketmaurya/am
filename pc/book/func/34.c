#include<stdio.h>		//search a no.in an array
void search(int[],int);
main()
{
	int a[]={1,2,5,6,9,17,16,18,20};
	int n;
	printf("enter the no. you want to search for (b/w 1-20)\n\n");
	scanf("%d",&n);
	search(a,n);
	return 0;
}
void search(int a[],int z)
{
	int i=0,x=0;
	while(a[i]!='\0')
	{
		if(a[i]==z)
			x=1;
		i++;
	}
	
	if(x==1)
		printf("found");
	else printf("not found\n\n");
}