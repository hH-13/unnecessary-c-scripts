#include <stdio.h>

main()
{
    float a,b,c;

    printf("Enter three numbers: ");
    scanf("%f %f %f",&a,&b,&c);

    if(a<b)
        if(a<c) printf("%f is the smallest number.",a);
        else printf("%f is the smallest number.",c);
    else
        if (b<c) printf("%f is the smallest number",b);
        else printf("%f is the smallest",c);
}
