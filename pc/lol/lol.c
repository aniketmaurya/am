#include<stdio.h>
#include<string.h>	//strcmp
int main()
{
	char A[20];
	char a[]="ashwin is a chutiya";
	char b[]="aniket ka room mate chutiya",c[]="shashwat hawas ka devta", d[]="pratik rool no. 68",e[]="aniket civil the topper";
	char f[]="abhishek the bakchod", g[]="buy 1 get 1 free", i[]="harsh civil ka topper", h[]="itna bakar bakar mt kr re chutiya";
	char a1[]="ashwin", b1[]="aniket",c1[]="shashwat",d1[]="pratik",e1[]="aniketcivil",f1[]="abhishek",g1[]="soumil",h1[]="sidhharth",i1[]="harsh";
	
	
	printf("please enter your first name in lowercase and i will tell something interesting about you\n********************************************\n");
	gets(A);
	printf("\n\n*********************************\nPlease wait...\nProcessing\n wtf\n\n ");
	if(strcmp(A,a1)==0)
		puts(a);
	else if(strcmp(A,b1)==0)
		puts(b);
	else if(strcmp(A,c1)==0)
		puts(c);
	else if(strcmp(A,d1)==0)
		puts(d);
	else if(strcmp(A,e1)==0)
		puts(e);
	else if(strcmp(A,f1)==0)
		puts(f);
	else if(strcmp(A,g1)==0)
		puts(g);
	else if(strcmp(A,h1)==0)
		puts(h);
	else if(strcmp(A,i1)==0)
		puts(i);
else printf("i dont know about you\n")	;
		
	
	
	printf("\nplease dont mind :D\n");
}