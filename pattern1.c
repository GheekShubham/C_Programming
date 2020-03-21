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
       for(int j = 1; j <= i; j++)
       {
           printf("%d", j);
       }
       printf("\n");
   }
	return 0;
}
