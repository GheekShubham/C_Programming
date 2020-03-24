/************************
**** PATTERN PROGRAM ****
****    A            ****
****    AB           ****
****    ABC          ****
****    ABCD         ****
****    ABCDE        ****
************************/
#include<stdio.h>
int main()
{
	char ch = 'A';
	int nor = 0;

	printf("Enter number of rows: ");
	scanf("%d", &nor);  // nor is used to store number of rows
	for(int i = 1; i <= nor; i++){
		for(int j = 1; j <= i; j++){
			printf("%c", ch);
			ch = ch + 1;
		}
		printf("\n");
		ch = 'A';
	}
	return 0;
}
