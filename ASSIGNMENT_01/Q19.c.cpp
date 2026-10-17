//program 19:PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR. 
#include<stdio.h>
int main ()
{
	char ch;
	printf("Enter any character\n");
	scanf("%c",&ch);
	(ch>='a' && ch<='z') ? (printf("character is small case letter")) : (printf("character is not a small case letter"));
}
