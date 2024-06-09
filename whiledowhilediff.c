#include <stdio.h>

main()
{
	int counter=0;

	printf("\nExample of while: \n");
	while (counter++ != 1)
        printf("counter value is %d\n", counter);

	counter=0;

	printf("\nExample of do-while: \n");
	do
	{
        printf("counter value is %d\n", counter);
    }
	while(counter++ != 1);
}
