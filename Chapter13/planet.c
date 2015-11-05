// When the program is run, the user will put the strings to be tested on the command line:
// 
// planet Jupiter venus Earth fred
// 
// Jupiter is planet 5
// venus is not a planet
// Earth is planet 3
// fred is not a planet

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main (int argc, char *argv[])
{
	char *planets[] = {"Mercury", "Venus", "Earth",
		                 "Mars", "Jupiter", "Saturn",
		               "Uranus", "Neptune", "Pluto"};
	int i, j;
	
	for (i = 1; i < argc; i++){
		for (j = 0; j < NUM_PLANETS; j++)
			if (strcmp(argv[i], planets[j]) == 0) {
				printf("%s is planet %d\n", argv[i], j + 1);
				break;
			}
		if (j == NUM_PLANETS)
			printf("%s is not a planet.\n", argv[i]);
	}
	
	return 0;
}
