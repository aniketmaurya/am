#include<stdio.h>
void sort(int[]);
main()
{
	int a[5],i;
	printf("enter the no. u want to sort\n");
	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	printf("\nsorting...\n\n");
	sort(a);
	for(i=0;i<=4;i++)
		printf("%d\t",a[i]);
	
}
void sort(int b[])
{
	int i,j,t;
	for(i=0;i<=4;i++)
		for(j=i+1;j<=4;j++)
		{
			if(b[i]>b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
}