#include<stdio.h>

int main()
{
	int num = 0;
	
	do{
		printf("Enter number: ");
		scanf("%d", &num);
	}while(num <= 0);
	
	return 0;
}
