#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
	int i,count,number,guess;
	srand(time(0));
	number=rand()%100+1; //generate a random number between 1 to 100
	// printf("The number is %d",number);
	printf(".................This is the simple game made by Aayush Bhattarai............\n\n");
	printf("Guess the number between 1 to 100: \n");
	
	while(number!=guess){
	scanf("%d",&guess);
	printf("\n");
	if(guess>number){
		printf("Lower number please\n");
	}
	else if(guess<number){
		printf("Higher number please\n");
	}
	count++;
	}
	printf("......................CONGRATULATIONS..........................\n");
	printf("YOU GUESSED THE NUMBER IN %d TIMES\n",count);
	printf("\nTHANKYOU\n\n");
	getch();
}
