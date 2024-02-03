#include<stdio.h>
 
int len(char str[]) 
{
	int l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

int cmp(char str[],char str2[])
{
	int i;
	for (i=0;str[i]!='\0' && str2[i]!='\0';i++)
	{
		if (str[i]==str2[i]) continue;
		else if (str[i]>str2[i]) return(1);
			 if (str[i]<str2[i]) return(-1);
	}
}	

void cpy(char dest[],char src[])
{
	int i;
	for (i=0;dest[i]!='\0' && src[i]!='\0';i++)
		dest[i]=src[i];
}

void cat(char dest[], char src[]) {
	int i=0,j;
	while (dest[i] != '\0')
      i++;  	
    j = 0;
	while (src[j] != '\0') 
	{
      dest[i] = src[j];
      j++;
      i++;	
	}
	dest[i] = '\0';
}
 
main()
{
	char str[100],str2[100]; 
	int i;
	printf("Enter the first string: ");
	scanf("%s",&str);
   
	printf("Enter second string: ");
	scanf("%s",&str2);
	
	printf("\nLength of these strings is : %d %d", len(str),len(str2));
	
	printf("\nComparison of strings yields %d",cmp(str,str2));
	
	printf("\n\nTo copy string, press 1; to concatenate, press 0: ");
	scanf("%d",&i);
	if (i==1){cpy(str2,str);printf("\nSecond string is now: %s",str2);}
	else {cat(str2,str);printf("\nSecond string is now: %s",str2);} 
}
 
