//PROGRAM 76: WRITE A PROGRAM TO REVERSE A STRING. (WITHOUT USING STRING.H FILE) 
#include<stdio.h>
int main()
{
	char str[10], revstr[10];
	printf("Enter the string:");
	scanf("%s",&str);
	int i=0,count;
	while(str[i]!='\0')
	{
		i++;
	}
	count=i-1;
	i=0;
	while(str[i]!='\0')
	{
		revstr[count]=str[i];
		count--;
		i++;
	}
	
	printf("After Reversing the string:%s",revstr);
}
