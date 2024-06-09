#include <stdio.h>

main()
{
    int a,b;

    printf("Enter the numbers:\n a=");
    scanf("%i",&a);
    printf("\nb=");
    scanf("%i",&b);


    (a>b)?printf("%i is greater",a):printf("%i is greater",b);
}
