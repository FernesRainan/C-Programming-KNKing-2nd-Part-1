// Speak in English //

#include <stdio.h>

int main (void)
{
    int i, fd, sd;

    printf("Enter a two-digit number: ");
    scanf("%d", &i);

    fd = i / 10; sd = i % 10;

    printf("You entered the number ");

    if (i == 11) printf("eleven\n");
    else if (i == 12) printf("twelve\n");
    else if (i == 13) printf("thirteen\n");
    else if (i == 14) printf("forteen\n");
    else if (i == 15) printf("fifteen\n");
    else if (i == 16) printf("sixteen\n");
    else if (i == 17) printf("seventeen\n");
    else if (i == 18) printf("eighteen\n");
    else if (i == 19) printf("nineteen\n");

    else {
        switch (fd){
            case 2: printf("twenty-"); break;
            case 3: printf("thirty-"); break;
            case 4: printf("forty-"); break;
            case 5: printf("fifty-"); break;
            case 6: printf("sixty-"); break;
            case 7: printf("seventy-"); break;
            case 8: printf("eighty-"); break;
            case 9: printf("ninety-"); break;
        }

        switch (sd){
            case 1: printf("one\n"); break;
            case 2: printf("two\n"); break;
            case 3: printf("three\n"); break;
            case 4: printf("four\n"); break;
            case 5: printf("five\n"); break;
            case 6: printf("six\n"); break;
            case 7: printf("seven\n"); break;
            case 8: printf("eight\n"); break;
            case 9: printf("nine\n"); break;
        }
    }

    return 0;
}
