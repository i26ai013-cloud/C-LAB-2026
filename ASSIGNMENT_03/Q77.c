//PROGRAM 77: PROGRAM TO FIND LENGTH, COPY, CONCATINATE, COMPARE, REVERSE OF STRING USING PRE-DEFINED FUNCTION. 
#include<stdio.h>
int main()
{
	char str1[10], str2[10];
	char copstr[20];
	char constr[20];
	char compstr[20];
	char revstr[20];
	
	//input with string length
	printf("Enter the first string:");
	scanf("%s",&str1);
	printf("String length:%d\n",strlen(str1));
	printf("Enter the secind string:");
	scanf("%s",&str2);
	printf("String length:%d\n",strlen(str2));
	
	//compare
	if(strcmp(str1,str2)==0)
	{
		printf("Strings are identical\n");
	}
	else
	{
		printf("Strings are not identical\n");
	}
	
	//concatination
	strcpy(constr,str1);
	strcat(constr," ");
	strcat(constr,str2);
	printf("concatination:%s\n",constr);
	
	//reversing
	int len=strlen(constr);
	int j=len-1;
	int i=0;
	for(i=0; i<len; i++)
	{
		revstr[j]=constr[i];
		j--;
	}
	printf("reversing:%s",revstr);
}
