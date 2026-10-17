//program 14:PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL. 
#include <stdio.h>
int main()
{
	char ch;
	printf("Enter the character=");
	scanf("%c",&ch);
	printf("character '%c' is a ",ch);
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("Capital Letter");
	}
	else if (ch>='a' && ch<='z')
	{
		printf("small letter");
	}
	else if (ch>='1' && ch<='9')
	{
		printf("Digit");
	}
	else
	{
		printf("symbol");
	}
}
