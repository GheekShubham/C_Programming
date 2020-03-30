/***********************************
**** 	   STAR PATTERN	        ****
****		*		****
****	       ***		****
****	      *****		****
**** 	     *******		****
****	    *********		****
***********************************/
#include<stdio.h>
int main()
{
	int numberOfRows = 0;

	printf("Enter number of rows: ");
	scanf("%d", &numberOfRows);
	
	for(int i = 1; i <= numberOfRows; i++)
	{
		for(int j = 1; j <= numberOfRows - i; j++)
		{
			printf(" ");
		}	
		for(int k = 1; k <= 2*i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
