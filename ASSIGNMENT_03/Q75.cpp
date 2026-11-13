//PROGRAM 75: WRITE A PROGRAM TO COMPARE TWO STRINGS. (WITHOUT USING STRING.H FILE) 
#include<stdio.h>
int main()
{
	char str1[10], str2[10];
	int i=0;
	printf("Enter first string:");
	scanf("%s",&str1);
	printf("Enter second string:");
	scanf("%s",&str2);
	int flag=0;
	while(str1[i]!='\0' || str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	{
		printf("strings are identical");
	}
	else
	{
		printf("strings are not identical");
	}
}
