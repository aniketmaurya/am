#include<stdio.h>
float ftoc(float x);
int main()
{
	float a,b;
	printf("\nenter the temp in farhenhiet\n");
	scanf("%f",&a);
	b=ftoc(a);
	printf("\n%f\n",b);
	
}
float ftoc(float x)
{
	float y;
	y=(x-32)/1.8;
	return y;
	
}