//Printing names//

#include <stdio.h>

int main (void)
{
    char first_initial, last_name;

    printf("\nEnter a first and last name: ");
    scanf(" %c", &first_initial); // gets first letter of first name. Ignores leading blank spaces//

    while (getchar() != ' '){
        // ignore remaining first name characters until a blank space is reached //
        ;
    }

    while ((last_name = getchar()) != '\n'){
        if (last_name == ' ') 
            /* ignore blank spaces before and after last name */
            ;
        else
            printf("%c", last_name);
       
    }

    printf(", %c\n\n", first_initial);

    return 0;
}

