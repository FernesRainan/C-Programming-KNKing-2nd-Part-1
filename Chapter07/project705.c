#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char input;
    int sum = 0;
    printf("\nEnter a word: ");

    while ((input = getchar()) != '\n'){

        switch (toupper(input)){
            case 'A': case 'E': case 'I': case 'L': 
            case 'N': case 'O': case 'R': case 'S':
            case 'T': case 'U':
                sum += 1;
                break;

            case 'D': case 'G':
                sum += 2;
                break;

            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;

            case 'F': case 'H': case 'V': case 'W':
            case 'Y':
                sum += 4;
                break;

            case 'K':
                sum += 5;
                break;

            case 'J': case 'X':
                sum += 8;
                break;

            case 'Q': case 'Z':
                sum += 10;
                break;
        }
    }

    printf("\nScrabble value: %d\n", sum);
    
    return 0;
}



