#include<stdio.h>
#include<math.h>
int main()
{
	int num = 0;

	printf("Enter number to check prime or not: ");
	scanf("%d", &num);
	
	if(num <= 1)
		printf("Invalid input!!!\n");
	else{
		int isPrime = 1;

		for(int i = 2; i*i <= num; i++)
		{
			if(num % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
	
		if(isPrime)
			printf("%d is Prime!!!\n", num);
		else
			printf("%d is not Prime!!!\n", num);
	}
	return 0;
}
