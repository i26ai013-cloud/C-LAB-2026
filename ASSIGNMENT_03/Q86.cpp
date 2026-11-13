/*PROGRAM 86:PROGRAM TO,WHICH READS YOUR NAME FROM THE KEY BOARD AND OUTPUT A LIST OF ASCII CODES.WHICH 
REPRESENT YOUR NAME.*/
#include<stdio.h>

int main()
{
	char str[100];
	int i=0, len;
	printf("Enter the string:");
	scanf("%s",str);
	printf("in ascii format\n");
	while(str[i]!='\0')
	{
		printf("%d\n",str[i]);
		i++;
	}
}
