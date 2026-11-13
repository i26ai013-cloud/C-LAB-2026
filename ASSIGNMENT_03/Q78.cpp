//PROGRAM 78: PROGRAM TO CHECK WHETHER A CHARACTER IS PRESENT IN STRING OR NOT. 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char target;
	
	printf("Enter the string:");
	scanf("%s", str);
	printf("Enter the target:");
	
	scanf(" %c", &target);
	
	int len=strlen(str);
	int flag=0,i;
	
	for(i=0; i<len; i++)
	{
		if(target==str[i])
		{
			printf("character is present.");
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Character not present");
	}
	return 0;
}

