#include<stdio.h>
#include<math.h>

int main()
{
 	int num = 0, result = 0, temp = 0, numberOfDigits = 0;

	printf("Enter number to check for Armstrong: ");
	scanf("%d", &num);
		
	temp = num;

	while(temp != 0)
	{
		numberOfDigits++;
		temp /= 10;
	}
	
	temp = num;
	
	while(temp != 0)
	{
		result += pow(temp % 10, numberOfDigits);
		temp /= 10;
	}
	
	if(result == num)
		printf("%d is Armstrong number.\n", num);
	else
		printf("%d is not Armstrong number.\n", num);
	return 0;
}
