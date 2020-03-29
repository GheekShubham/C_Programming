#include<stdio.h>
int main()
{
	float num1 = 0.0f, num2 = 0.0f;
	char operator;

	printf("Enter operand1 operator operand2 separated by space: ");
	scanf("%f %c %f", &num1, &operator, &num2);

	float result = 0.0f;

	switch(operator){
	
		case '*':
				result = num1 * num2;
				break;
		case '/':
				result = num1 / num2;
				break;
		case '+':
				result = num1 + num2;
				break;
		case '-':
				result = num1 - num2;
				break;
	}
	printf("%.2f %c %.2f = %.2f\n",num1 ,operator, num2, result);
	return 0;
}
