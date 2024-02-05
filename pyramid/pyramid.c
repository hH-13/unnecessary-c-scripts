
#include <stdio.h>

main()
{
	int h,i,j,k;
	
	printf("Enter height of pyramid: ");
	scanf("%d",&h);
	
	for (i=1;i<=h;i++)
	{
		for (j=1;j<=h-i+1;j++)
			printf(" ");
		for (k=1;k<=2*i-1;k++)
			printf("*");
		printf("\n");
	}
}	