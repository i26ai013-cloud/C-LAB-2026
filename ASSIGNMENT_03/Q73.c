//program 73:WRITE A PROGRAM TO COPY A STRING INTO ANOTHER.(WITHOUT USING STRING.H FILE)
#include<stdio.h>
int main()
{
	char ch[10], sch[10];
	int i;
	printf("Enter the string:");
	for(i=0; ch[i+1]!='\n'; i++)
	{
		scanf("%c",&ch[i]);
	}
	printf("string length=%d\n",i);
}
