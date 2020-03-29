#include<stdio.h>
int main()
{
	int n = 0;

	printf("Enter number upto which sum have to be evaluated: ");
	scanf("%d", &n);
	
	int sum = 0;
	
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	
	printf("Sum of natural numbers upto %d is %d.\n", n, sum);
	return 0;
}
	
