#include <stdio.h>

main()
{
    int i=1,sum=0,n,m;

    printf("How many numbers are to be added?  ");
    scanf("%i",&m);

    do {
            printf("Enter number: ");
            scanf("%i",&n);
            sum+=n;
            i++;
    }
    while (i<=m);
    printf("Sum of the numbers is %i",sum);
}
