#include <stdio.h>

main()
{
    int m,i,n=1;

    printf("Enter a number: ");
    scanf("%i",&m);

    for(i=1;i<=m;i++)
    n*=i;

    printf("The factorial of %i is %i",m,n);
}
