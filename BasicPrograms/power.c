#include<stdio.h>
int main()
{
	int base = 0, power = 0, num = 1;
	
	printf("Enter base and power separatd by space: ");
	scanf("%d %d", &base, &power);
	
	int i = power;
	while(i-- != 0)
		num *= base;
		
	printf("%d power %d is %d.\n", base, power, num);
	return 0;
}
