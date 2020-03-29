#include<stdio.h>

int fact(int n)
{
	if(n == 1)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int num = 0;
	printf("Enter number to compute factorial: ");
	scanf("%d", &num);

	printf("Factorial of %d is %d.\n", num, fact(num));
	return 0;
}
