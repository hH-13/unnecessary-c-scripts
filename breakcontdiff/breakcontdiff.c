#include <stdio.h>

main()
{
	int n,i;
	printf("Enter a number under 10: ");
	scanf("%d",&n);
	
	printf("\nExample of break: \n");
	
	for (i=1;i<=10;i++)
	{
		if (i==n)
		break;
		printf("%d ",i); 
	}

	printf("\n\nExample of continue: \n");
	
	for (i=1;i<=10;i++)
	{
		if (i==n)
		continue;
		printf("%d ",i); 
	}
}	
