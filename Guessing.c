/*Name:Mellanie Kosgei
  Reg No:BCS-05-0543/2026
  Description:Guessing game
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int secretNumber;
	int guess;
	int attempts=0;
	
	srand(time(0));
	secretNumber=rand()%20+1;
	
	printf("Guess a number btwn 1 and 20:\n");
	
	do{
		printf("Enter your guess");
		scanf("%d",&guess);
		
		attempts++;
		
		if(guess>secretNumber){
			printf("too high\n");
		}
		else if(guess<secretNumber){
			printf("too low\n");
		}
		else{
			printf("congratulations\n");
			printf("you guessed the number in %d attempts\n",attempts);
		}
	}
	while(guess!=secretNumber);
	return 0;
}