#include<stdio.h>
int main()
{
	int num = 0;
	printf("Enter number to compute factorial: ");
	scanf("%d", &num);

	long fact = 1;

	for(int i = 1; i <= num; i++){
		fact *= i;   // fact = fact * i;
	}
	
	printf("Factorial of %d is %ld.\n", num, fact);
	return 0;
}
