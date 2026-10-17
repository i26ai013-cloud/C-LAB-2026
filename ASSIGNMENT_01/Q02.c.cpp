//Program 2: PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE.

#include<stdio.h>

int main()
{
    int e,cs,c,p,m,t;
    printf("Please enter the data:\n"); printf("English=");
    scanf("%d",&e);
    printf("computer science=");
    scanf("%d",&cs);
    printf("physics=");
    scanf("%d",&p);
    printf("chemistry=");
    scanf("%d",&c);
    printf("maths=");
    scanf("%d",&m);
    t=e+cs+p+c+m;
    printf("total=%d\n",t);
    float per;
    per=t/5.0;
    printf("percentage=%.2f%%",per);
}
