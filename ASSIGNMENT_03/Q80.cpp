//PROGRAM 80:PROGRAM TO CONVERT LOWER CASE STRING INTO UPPER CASE. 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string:");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str,"\n")]='\0';
	for(int i=0; i<strlen(str); i++)
	{
		if(str[i]>96 && str[i]<123)
		{
			str[i]=str[i]-32;
		}	
	}
	puts(str);
}
