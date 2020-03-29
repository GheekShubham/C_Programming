#include<stdio.h>
#define minAgeForVoting 18

int main(){

	//SAMPLE PROGRAM 
	int age = 0;
	printf("Enter your age: ");
	scanf("%d", &age);
	if(age >= minAgeForVoting){
		printf("Yes, You can vote.\n");
	}
	else{
		printf("Opps, You are not allowed to vote.\n");
	}
	return 0;
}
