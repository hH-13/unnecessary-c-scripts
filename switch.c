#include <stdio.h>

main()
{
	float a,b,c;
	char op;

	printf("Enter operator: ");
	scanf("%c",&op);
    printf("Enter the numbers: ");
	scanf("%f %f",&a,&b);

	switch (op)
	{
		case '+': c = a + b;
			printf("Addition of %f and %f gives %f",a,b,c);
			break;

		case '-': c = a - b;
			printf("Subtraction of %f and %f gives %f",a,b,c);
			break;

		case '*': c = a * b;
			printf("Multiplication of %f and %f gives %f",a,b,c);
			break;

		case '/': c = a / b;
			printf("Division of %f and %f gives %f",a,b,c);
			break;

	}
}
