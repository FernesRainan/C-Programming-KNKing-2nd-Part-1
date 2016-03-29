//Counting the number of vowels//

#include <stdio.h>
#include <ctype.h>

int main (void)
{
    int count = 0;
    char ch;

    printf("\n\nEnter a sentence: ");
    
    while ((ch = getchar()) != '\n'){
        
        ch = toupper(ch);

        switch (ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                count++ ;
        }
    }
    
    printf("Your sentence contains %d vowels.\n\n", count);

    return 0;
    
}


                

