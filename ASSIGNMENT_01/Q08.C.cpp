/*program 8:EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO 
NUMBER OF DAY,HOURS AND MINUTES*/
#include<stdio.h>
void main ()
{
    int d,h,m,s,d1,h1,m1,s1,s2,s3;
    s=31558150;
    d=s/(60*60*24);//no. of days
    d1=d*60*60*24;
    s1=s-d1;//remaining seconds
    h=s1/(60*60);//no. of hours
    h1=h*60*60;
    s2=s1-h1;//remaining seconds
    m=s2/60;//no. of min
    m1=m*60;
    s3=s2-m1;//remaining seconds
    printf("d=%d days\n",d);
    printf("h=%d hours\n",h);
    printf("m=%d minutes\n",m);
    printf("s=%d seconds",s3);
}
