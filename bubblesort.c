#include <stdio.h>

main()
{
	int  ar[100], n,i,k,t;
	
	printf("How many integers?\n");
	scanf("%d",&n);
	
	printf("\nEnter %d integers:\n",n);
	for (i=0;i<n;i++) scanf("%d", &ar[i]);
	
	for (i=0;i<(n-1);i++)
	{
		for (k=0;k<n-i-1;k++)
		{
			if (ar[k]>ar[k+1])
			{
				t=ar[k];
				ar[k]=ar[k+1];
				ar[k+1]=t;
			}
		}
	}
	
	printf("\nSorted list is as follows: \n");
	for (i=0;i<n;i++)printf("%d\n",ar[i]);
}	