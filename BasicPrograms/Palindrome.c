#include<stdio.h>
int main()
{
	int num = 0;
	printf("Enter number: ");
	scanf("%d", &num);
	
	int temp = num, reverse = 0, remainder = 0;

	while(temp != 0)
	{
		remainder = temp % 10;
		reverse = reverse * 10 + remainder;
		temp /= 10;
	}
	
	if(num == reverse)
		printf("%d is Palindrome.\n",num);
	else
		printf("%d is not Palindrome.\n",num);
	return 0;
}
