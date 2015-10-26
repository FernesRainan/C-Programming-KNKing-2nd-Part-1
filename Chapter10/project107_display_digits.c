// Write a program that prompts the user for a number
// and then displays the number 

#include <stdio.h>
#include <ctype.h>

#define NUM_SEGMENTS 7
#define CHAR_HEIGHT 3
#define CHAR_WIDTH 4
#define MAX_DIGITS 34
#define COLUMNS (CHAR_WIDTH * MAX_DIGITS)

const int segments_per_character[10][NUM_SEGMENTS] = {
	{1,1,1,1,1,1,0}, /* 0 */
	{0,1,1,0,0,0,0}, /* 1 */
	{1,1,0,1,1,0,1}, /* 2 */
	{1,1,1,1,0,0,1}, /* 3 */
	{0,1,1,0,0,1,1}, /* 4 */
	{1,0,1,1,0,1,1}, /* 5 */
	{1,0,1,1,1,1,1}, /* 6 */
	{1,1,1,0,0,0,0}, /* 7 */
	{1,1,1,1,1,1,1}, /* 8 */
	{1,1,1,1,0,1,1}  /* 9 */
};

//Segment Numbering:
//        0
//       ---
//     5|   |1
//      | 6 |
//       ---
//     4|   |2
//      | 3 |
//       ---

// segment position
//       0 1 2   
//    0  
//    1   
//    2

// segment position in a 3x3 grid
const int segment_coordinates[NUM_SEGMENTS][2] = {
	{0,1},
  {1,2},
  {2,2},
  {2,1},
  {2,0},
  {1,0},
  {1,1}
};	

// external variable
char digits[CHAR_HEIGHT][COLUMNS];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(int row_size);

int main (void)
{
	char ch;
	int digit_count = 0;
	
	clear_digits_array();
	
	printf("Enter a %d number: ", MAX_DIGITS);
	
	while ((ch = getchar()) != '\n' && digit_count < MAX_DIGITS){
		if (isdigit(ch)) {
			// convert the char to an int
			// calculate the offset into the output buffer
			process_digit((int) ch - '0', CHAR_WIDTH * digit_count);
			digit_count++;
		}
	}
	
	print_digits_array(digit_count * CHAR_WIDTH);
	
	return 0;
}

void clear_digits_array(void)
{
	int row, col;
	
	for (row = 0; row < CHAR_HEIGHT; row++)
		for (col = 0; col < COLUMNS; digits[row][col++] = ' ');
}

void process_digit(int digit, int position)
{
	char display[NUM_SEGMENTS] = "_||_||_";
// Segment Numbering:
//        0
//       ---
//     5|   |1
//      | 6 |
//       ---
//     4|   |2
//      | 3 |
//       ---

	int row, col, segment;
	
	for (segment = 0; segment < NUM_SEGMENTS; segment++){
		if (segments_per_character[digit][segment]) {
			row = segment_coordinates[segment][0];
			col = position + segment_coordinates[segment][1];
			
			// place the representative character into the
			// 3x3 sub-grid beginning at the correct offset
			
			digits[row][col] = display [segment];
		}
	}
}

void print_digits_array (int row_size)
{
	int row, column;
	
	for (row = 0; row < CHAR_HEIGHT; row++){
		for (column = 0; column < row_size; column++){
			printf("%c", digits[row][column]);
		}
		printf("\n");
  }
}
 

	
