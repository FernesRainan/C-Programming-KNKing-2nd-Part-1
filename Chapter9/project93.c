// Write a program that generates a "random walk" acrossa 10 x 10 array //
// void generate_random_walk(char walk[10][10]); //
// void print_array (char walk[10][10]); //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EARTH '.'
#define WIDTH 10

void generate_random_walk (char walk[WIDTH][WIDTH]);
void print_array (char walk[WIDTH][WIDTH]);

int main (void)
{
	char walk [WIDTH][WIDTH];
    	
    	generate_random_walk (walk);  
	printf("\n");
		
	print_array(walk);
		
	return 0;
}

void generate_random_walk (char walk[WIDTH][WIDTH])
{
	char alphabet = 'A';
	int x, y, direction, moves_tried, new_x, new_y;
    
	for (x = 0; x < WIDTH; x++)
		for (y = 0; y < WIDTH; y++)
			walk[x][y] = EARTH;
		
	srand((unsigned) time(NULL));

	x = 0; y = 0;
	walk[x][y] = alphabet++;
	direction = rand() % 4;
	moves_tried = 0;
		
	while (moves_tried < 4 && alphabet <='Z'){
		switch ((direction + moves_tried) % 4){
			case 0: new_x = x; new_y = y + 1; break;
			case 1: new_x = x; new_y = y - 1; break;
			case 2: new_x = x + 1; new_y = y; break;
			case 3: new_x = x - 1; new_y = y; break;
		}
		if (0 <= new_x && new_x < WIDTH && 0 <= new_y && new_y <= WIDTH &&
			walk[new_x][new_y] == EARTH){
			x = new_x; y = new_y; 
			walk[x][y] = alphabet++;
			direction = rand() % 4;
			moves_tried = 0;
		}
		else moves_tried++;
	}
}

void print_array (char walk[WIDTH][WIDTH])
{
	int x, y;
	
	for (x = 0; x < WIDTH; x++){
			for (y = 0; y < WIDTH; y++)
				printf("%c", walk[x][y]);
			printf("\n");
		}
}
				
