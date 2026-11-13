//program 70:WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.
#include<stdio.h>
int alpha(chr)
{
	chr ;
	if(chr=='u'||chr=='o'||chr=='i'||chr=='e'||chr=='a'||chr=='U'||chr=='O'||chr=='I'||chr=='E'||chr=='A')
	{
		printf("Character is a vowel");
		printf("%d",chr);
	}
	else
	{
		printf("Character is not a vowel");
	}
	printf("\n");
	main();
}
int main(chr)
{
	printf("Enter the character=");
	scanf("%c",&chr);
	alpha(chr);
}
