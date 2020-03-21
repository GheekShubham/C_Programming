/********************************
 **** Number pattern Program ****
 *******************************/
#include <stdio.h>

int main(void) {
    
    int number_of_rows= 0;
    printf("Enter number of rows: ");
    scanf("%d", &number_of_rows);
    printf("\n");
   for(int i = 1; i <= number_of_rows; i++)
   {
       for(int j = 1; j <= number_of_rows - i; j++)
       {
           printf(" ");
       }
       for(int k = 1; k <= i; k++)
       {
           printf("%d", k);
       }
       printf("\n");
   }
	return 0;
}
