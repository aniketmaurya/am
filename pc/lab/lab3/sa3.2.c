#include<stdio.h>   //case conversion A=a
	
int main()

{

char ch;


printf("input\n\n");
scanf("%c",&ch);

if((ch>='a')&&(ch<='z'))
ch=ch-32;

else
ch=ch+32;

printf("\n %c",ch);






}
