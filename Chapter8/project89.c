// Write a program that generates a "random walk" acrossa 10 x 10 array //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EARTH '.'
#define WIDTH 10

int main (void)
{
    char field [WIDTH][WIDTH];
    char walk = 'A';
    int x, y, direction, moves_tried, new_x, new_y;
    
    for (x = 0; x < WIDTH; x++)
    	for (y = 0; y < WIDTH; y++)
    		field[x][y] = EARTH;
		
    srand((unsigned) time(NULL));

	x = 0; y = 0;
	field[x][y] = walk++;
	direction = rand() % 4;
	moves_tried = 0;
		
	while (moves_tried < 4 && walk <='Z'){
		switch ((direction + moves_tried) % 4){
			case 0: new_x = x; new_y = y + 1; break;
			case 1: new_x = x; new_y = y - 1; break;
			case 2: new_x = x + 1; new_y = y; break;
			case 3: new_x = x - 1; new_y = y; break;
		}
		if (0 <= new_x && new_x < WIDTH && 0 <= new_y && new_y <= WIDTH &&
			field[new_x][new_y] == EARTH){
			x = new_x; y = new_y; 
			field[x][y] = walk++;
			direction = rand() % 4;
			moves_tried = 0;
		}
		else moves_tried++;
	}
	
	printf("\n");
		
	for (x = 0; x < WIDTH; x++){
		for (y = 0; y < WIDTH; y++)
			printf("%c", field[x][y]);
		printf("\n");
	}
		
	return 0;
}		
