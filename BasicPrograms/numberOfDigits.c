#include<stdio.h>
int main()
{
	int numberOfDigits = 0, num = 0;

	printf("Enter number to count digits: ");
	scanf("%d",&num);
	
	int temp = num;

	while(temp != 0)
	{
		numberOfDigits++;
		temp /= 10;
	}
	
	printf("Number of digits in %d is %d.\n", num, numberOfDigits);
	return 0;
}
