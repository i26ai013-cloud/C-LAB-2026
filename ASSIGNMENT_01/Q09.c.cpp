//program 9:PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.
#include<stdio.h>
void main()
{    
    int h,m,s,sec;
    printf("hours=");
    scanf("%d",&h);
    printf("min=");
    scanf("%d",&m);
    printf("sec=");
    scanf("%d",&s);
    sec=h*3600+m*60+s;
    printf("seconds=%d",sec);
}
