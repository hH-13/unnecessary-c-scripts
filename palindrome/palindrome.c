#include <stdio.h>
#include <string.h>
 
main()
{
   char a[100], b[100];
 
   printf("Enter a number or a string\n");
   gets(a);
 
   strcpy(b,a);
   strrev(b);
 
   (strcmp(a,b) == 0)?printf("This is a palindrome."):printf("This is not a palindrome.");
}