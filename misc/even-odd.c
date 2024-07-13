#include <stdio.h>

main()
{
    int n,r;

    printf("Enter a number: ");
    scanf("%i",&n);

    r=n%2;

    (r==0)?printf("The number is even"):printf("The number is odd");
}
