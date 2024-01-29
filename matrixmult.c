#include <stdio.h>

main()
{
	int p,q,r,s,t,u,i,j,c;
	int a[100][100],b[100][100],m[100][100];

	printf("Enter number of rows and columns in first matrix: ");
	scanf("%d %d",&p,&q);
	printf("Enter number of columns in second matrix: ");
	scanf("%d",&r);

	printf("Enter first matrix: ");
	for (s=0;s<p;s++)
	{
		for (t=0;t<q;t++)
		{
			scanf("%d",&a[s][t]);
		}
	}
	
	printf("Enter second matrix: ");
	for (s=0;s<q;s++)
	{
		for (t=0;t<r;t++)
		{
			scanf("%d",&b[s][t]);
		}
	}

	
	for (i=0;i<p;i++)
	{
		for (j=0;j<r;j++)
		{
			m[i][j] = 0;
			for (c=0;c<q;c++)
			{
				m[i][j] += a[i][c]*b[c][j];
			}
		}
	
	}

	printf("Multiplication of matrices yields: \n");
	for (t=0;t<p;t++)
	{
		for (u=0;u<r;u++)
		{
			printf("%d ",m[t][u]);
		}
		if (u==r) printf("\n");
	}

}
