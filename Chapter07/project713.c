//Display the average word length to one decimal place.//

#include <stdio.h>
#define LAST_WORD 1 //Last word is not calculated in switch//

int main (void)
{
    char input;
    int characters = 0, words = LAST_WORD;

    printf("\nEnter a snetence: ");

    while ((input = getchar()) != '\n'){
        switch (input){
            case ' ':
                words++;
                break;
            default:
                characters++;
                break;
        }
    }

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Average word length: %.1f\n", (float) characters/words);

    return 0;
}


       
