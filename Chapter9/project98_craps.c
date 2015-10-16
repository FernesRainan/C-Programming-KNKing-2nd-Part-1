//Write a program that simulates the game of craps. which is played with two dice//
//On the first roll, the player wins if the sum of the dice is 7 or 11//
//The player loses if the sum is 2, 3 or 12//
//Any other roll is called the 'point' and the game continues.//
//On each subsequent roll, the player wins if he or she rolls the point again.//
//The player loses by rolling 7.//


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define DICE 6

int roll_dice(void);
bool play_game(void);

int main (void)
{
	int wins = 0, losses = 0;
	char play_again;
		
	printf("This is the game of craps.\n");
	printf("Please hit enter to start the game!\n");
			
	do {
		if (play_game())
			wins++;
		else losses++;
		printf("Play again? ");
		scanf(" %c", &play_again);
	} while (play_again == 'y' || play_again == 'Y');
	
	printf("Wins: %3d    Losses: %3d\n", wins, losses);
	
	return 0;
}

int roll_dice(void)
{
	return (rand () % (DICE+DICE-1)) + 2;
}
	
bool play_game(void)
{
	bool point[DICE + DICE + 1] = {false}; //just add '1' and shift 0 to 1, 11 to 12//
	int trial, sum; 
	srand((unsigned) time(NULL));	
		
	for (trial = 1; ; trial++) {
		
		while (getchar() != '\n');  //Press Enter key//
		
		sum = roll_dice();			
		
		switch (sum) {
			case 2: case 3: case 12:
				printf("You rolled: %d\n\n", sum); printf("You lose!\n\n"); 
				return false;
			
			case 7: case 11:
				if (trial == 1){
					printf("You rolled: %d on first roll.\n\n", sum); printf("You win!\n\n");
					return true;
				}
				else if (sum == 7 && trial != 1) {
					printf("You rolled: %d\n\n", sum); printf("You lose!\n\n"); 
					return false;
				}
			
			default:
				if (point[sum] == true){
					printf("You rolled: %d again.\n\n", sum); printf("You win!\n\n");
					return true;
				}
				else {
					printf("Your point is %d\n", sum);
					point[sum] = true;
				}
		}
	}
}
