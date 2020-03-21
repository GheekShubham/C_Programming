/**************************
 **** Even Odd Program ****
 *************************/
#include <stdio.h>

int main(void) {
    
    int number= 0;
    printf("Enter number: ");
    scanf("%d", &number);
    
    if(number % 2 == 0)
    {
        printf("%d is even number.\n", number);
    }
    else
    {
        printf("%d is odd number.\n", number);
    }
	return 0;
}
