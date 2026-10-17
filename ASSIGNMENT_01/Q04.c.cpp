//program 4:PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES.
#include<stdio.h>
void main ()
{
    float f,c;
    printf("temp in Fahrenhheit=");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("temp in centigrades=%.2f",c);
}    
