/*PROGRAM 71b: WRITE A PROGRAM TO READ INFORMATION OF 4 STUDENT AND DISPLAY THE0 INFORMATION OF THOSE STUDENT 
WHOSE MARKS ARE GREATHER THAN 500.(PASSING ARRAY OF STRUCTURE INTO FUNCTION). */
#include<stdio.h>
struct student{
	char name[20];
	char adm_no[20];
	int marks;
};
void gt500(struct student s[],int n)
{
	printf("\nStudents whose marks greater than 500\n");
	for(int i=0; i<n; i++)
	{
		if(s[i].marks>500)
		{
			printf("\nstudent name:%s\n",s[i].name);
			printf("admission no.:%s\n",s[i].adm_no);
			printf("marks:%d\n",s[i].marks);
		}
	}
}
int main()
{
	struct student s[10];
	printf("Enter student details:");
	for(int i=0; i<10; i++)
	{
		printf("\nStudent:%d\n",i+1);
		printf("student name:");
		scanf("%s",s[i].name);
		printf("admission no:");
		scanf("%s",s[i].adm_no);
		printf("marks:");
		scanf("%d",&s[i].marks);
	}
	gt500(s, 10);
}
