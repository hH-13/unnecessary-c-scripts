#include <stdio.h>
 
int main()
{
   int array[100], search, c, n, count = 0;
 
   printf("Enter the number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d numbers\n", n);
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
   printf("Enter the number to search\n");
   scanf("%d", &search);
   
   printf("%d is present at", search);
 
   for (c = 0; c < n; c++) 
   {
      if (array[c] == search)
	  {
        printf(" location %d ", c+1);
		count++;
      }
   }
   if (count == 0)
      printf("\n%d is not present in array.\n", search);
   else
      printf("\n%d is present %d times in array.\n", search, count);
 
}
