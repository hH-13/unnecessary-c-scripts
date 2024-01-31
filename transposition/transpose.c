#include <stdio.h>

main()
{
	int p,q,r,s,t,u,i,j,c;
	int a[100][100],b[100][100],m[100][100];

	printf("Enter number of rows and columns in matrix: ");
	scanf("%d %d",&p,&q);
	

	printf("Enter the matrix: ");
	for (r=0;r<p;r++)
	{
		for (s=0;s<q;s++)
		{
			scanf("%d",&a[r][s]);
		}
	}
	
	for (r=0;r<p;r++)
	{
		for (s=0;s<q;s++)
		{
			b[r][s]=a[s][r];
		}
	}

	printf("\nTranspose of the matrix is: \n");
	for (r=0;r<p;r++)
	{
		for (s=0;s<q;s++)
		{
			printf("%d ",b[r][s]);
		}
		if (s==q) printf("\n");
	}

}
