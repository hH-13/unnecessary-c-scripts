#include <stdio.h>
int main()
{
    int n,i,f1=0,f2=1,fn;

    printf("Enter the number of terms: ");
    scanf("%i", &n);

    printf("Fibonacci Series:\n");

    for (i=1; i<=n; i++)
    {
		printf("\t%i\n",f1);
		fn=f1+f2;
		f1=f2;
		f2=fn;
	}
}