//PROGRAM 85: PROGRAM TO REPLACE A PARTICULAR CHARACTER OF STRING WITH ANOTHER CHARACTER.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],target,replace;
	int i;
	printf("Enter the string:");
	scanf("%s",str);
	printf("target:");
	scanf(" %c",&target);
	printf("Replace with:");
	scanf(" %c",&replace);
	int len=strlen(str);
	for(i=0; i<len; i++)
	{
		if(target==str[i])
		{
			str[i]=replace;
		}
	}
	puts(str);
}
