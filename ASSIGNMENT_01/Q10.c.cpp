/*program 10:WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE FORMULA.
 CM = M/2+P/2+C/2+E*/
 #include<stdio.h>
 void main()
 {
     float m,p,c,e;
     printf("enter your marks out of 200\n");
     printf("maths=");
     scanf("%f",&m);
     printf("physics=");
     scanf("%f",&p);
     printf("chemistry=");
     scanf("%f",&c);
     printf("electronics (out of 100)=");
     scanf("%f",&e);
     float cm;
     cm=m/2+c/2+p/2+e;
     if(m>200||c>200||p>200||e>100)
     {
         printf("Error");
     }
     else
     {
         printf("Cut off marks=%.2f",cm);
     }
 }
