//PROGRAM 79: PROGRAM TO COUNT NO. OF VOWELS IN A STRING.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string:");
	fgets(str, sizeof(str), stdin);
	int count=0;
	for(int i=0; i<strlen(str); i++)
	{
		switch (str[i])
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				count ++;
	}
	printf("Number of vowels in string:%d",count);
}
