//program 68: WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION.
#include<stdio.h>
void books(int n, char book[][10])
{
	int i,j;
	for(i=0; i<n; i++)
	{
		gets(book[i]);
	}
	printf("\nName of books\n");
	for(i=0; i<n; i++)
	{
		puts(book[i]);
	}
}
int main()
{
	int i,j,n;
	printf("Enter the number of books:");
	scanf("%d\n",&n);
	char book[n][10];
	books(n,book);
	return 0;
}

