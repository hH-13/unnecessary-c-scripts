#include <stdio.h>

main()
{
    float f,c;

    printf("Enter the temperature in degrees Fahrenheit: ");
    scanf("%f",&f);

    c=(5*(f-32))/9;

    printf("%f\xf8 F = %f\xf8 C",f,c);
}
