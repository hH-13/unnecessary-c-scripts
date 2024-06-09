#include <stdio.h>

main()
{
	int h,i,j,k;
	
	printf("Enter height of pyramid: ");
	scanf("%d",&h);
	
	for (i=h;i>=1;i--)
	{
		for (j=h-i+1;j>=1;j--)
			printf(" ");
		for (k=2*i-1;k>=1;k--)
			printf("*");
		printf("\n");
	}
}	