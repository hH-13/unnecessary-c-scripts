#include <stdio.h>

main()
{
    char str[80];

    printf("Enter a character string:  ");
    scanf("%s",&str);

    printf("%s",strupr(str));
}
