#include <stdio.h>

main()
{
    int n,i;

    printf("How many numbers are to be printed?  ");
    scanf("%i",&n);

    for(i=1;i<=n;i++)
        printf("%i\n",i);
}
