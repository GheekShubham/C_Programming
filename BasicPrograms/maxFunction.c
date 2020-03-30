#include<stdio.h>

int max(int num1, int num2)
{
	return (num1 >= num2) ? num1 : num2;
}

int main()
{
	int num1 = 0, num2 = 0;
	printf("Enter two numbers separated with space: ");
	scanf("%d %d", &num1, &num2);
	printf("Maximum from %d and %d is %d.\n", num1, num2, max(num1, num2));
	return 0;
} 
