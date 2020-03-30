#include<stdio.h>

void stringCopy(char *src, char *tgt)
{
	int i = 0;
	while((*(tgt+i) = *(src+i)) != '\0')
	{
		i++;
	}
	return;
}

int main()
{
	char source[] = "Shubham";
	char destination[10];
	stringCopy(source, destination);
	int i = 0;
	while(destination[i] != '\0')
	{
		printf("%c", destination[i]);
		i++;
	}
	printf("\n");	
	return 0;
}
	
