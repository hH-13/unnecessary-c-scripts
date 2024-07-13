#include <stdio.h>
#include<math.h>

main()
{
float A,B,C,D,d,p,q,r,s;
//Input equation from user
printf("Enter co-efficient of x^2:");
scanf("%f",&A);
printf("Enter co-efficient of x:");
scanf("%f",&B);
printf("Enter constant term:");
scanf("%f",&C);

D=(pow(B,2))-(4*A*C); /*find discriminant*/

p=(-B)/(2*A);

if (D<0)
{d=D*(-1);

q=sqrt(d)/(2*A);
printf("Roots are imaginary\n");
printf("And their values are %f + %fi  ",p,q);
printf("and %f - %fi",p,q);}

else if (D==0)
{
q=sqrt(d)/(2*A);
printf("Roots are real and equal\n");
printf("And the value is %f",p);}

else {

d=D;
q=sqrt(d)/(2*A);
r=p+q;
s=p-q;
printf("Roots are real and distinct\n");
printf("And their values are %f and %f",r,s);}

}
