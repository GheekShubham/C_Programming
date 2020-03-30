#include<stdio.h>
int main()
{
	int num1 = 0, num2 = 1, num = 0, n = 0;

	printf("Enter number of terms of fibonacci series: ");
	scanf("%d",&n);
	
	if(n <= 0)
	{
		printf("\n");
	}
	else if(n == 1)
	{
		printf("%d \n", num1);
	}else if(n >= 2)
	{
		printf("%d %d ", num1, num2);
	}
	if(n > 2)
		for(int i = 3; i <= n; i++)
		{
			num = num1 + num2;
			printf("%d ",num);
			num1 = num2;
			num2 = num;
		}
	printf("\n");
	return 0;
}
