#include<stdio.h>   //check if vowel consonant or  not alphabet
	
int main()

{

char ch;


printf("input\n\n");
scanf("%c",&ch);

if((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z'))
{
printf("alphabet");

if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))

printf("  and its vowel\n");

else printf("  and its consonant");

}

else printf("special character");






}
