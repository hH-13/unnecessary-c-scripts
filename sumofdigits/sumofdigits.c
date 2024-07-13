#include <stdio.h>
 
main()
{
    int num, temp, digit, sum = 0;
 
    printf("Enter a number \n");
    scanf("%d", &num);
    temp = num;
    while (temp>0)
    {
        digit=temp%10;
        sum+=digit;
        temp/=10;
    }
    printf("Sum of the digits of %d = %d\n",num,sum);
}