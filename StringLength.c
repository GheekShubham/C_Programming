#include<stdio.h>

int strLen(char str[]){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

int main()
{
	char str[] = {'S', 'h', 'u', 'b', 'h', 'a', 'm'};
	printf("Length of string is %d.\n", strLen(str));
	return 0;
}
