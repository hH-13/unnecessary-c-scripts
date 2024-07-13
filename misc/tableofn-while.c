#include <stdio.h>

main()
{
    int n,m,i=1;

    printf("Enter the number whose multiplication table is to be printed: ");
    scanf("%i",&n);

    while (i<=10)
    {
        m=n*i;
        printf("%i * %i = %i\n",n,i,m);
        i++;
    }
}
