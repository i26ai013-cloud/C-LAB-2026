//PROGRAM 84: PROGRAM TO CHECK WHETHER A GIVEN STRING IS PALINDROME OR NOT. 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],rev[100];
	int i=0;
	printf("Enter the string:");
	scanf("%s",str);
	int j=strlen(str)-1;
	while(str[i]!='\0')
	{
		rev[j]=str[i];
		i++;
		j--;
	}
	if(strcmp(rev,str)==0)
	{
		
		printf("PALINDROME");
	}
	else
	{
		printf("NOT A PALINDROME");
	}
}
