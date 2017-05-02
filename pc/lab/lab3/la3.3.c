#include<stdio.h>   //odd even via switch case
	
int main()

{

int a;


printf("input\n\n");
scanf("%d",&a);

switch(a%2)
{
case 0: printf("even");
break;
case 1: printf("odd");
}



}
