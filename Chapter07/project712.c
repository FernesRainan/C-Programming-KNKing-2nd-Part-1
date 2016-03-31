#include <stdio.h>

int main (void)
{
    float cvalue, nvalue;
    char ch;

    printf("Enter an expression: ");
    scanf(" %f", &cvalue);

    while ((ch = getchar()) != '\n')
    {
        switch (ch){
            case '+':
                scanf(" %f", &nvalue);
                cvalue += nvalue;
                break;

            case '-':
                scanf(" %f", &nvalue);
                cvalue -= nvalue;
                break;

            case '*':
                scanf(" %f", &nvalue);
                cvalue *= nvalue;
                break;

            case '/':
                scanf(" %f", &nvalue);
                if (nvalue == 0) {
                    printf("Cannot divide with 0\nPlease restart program\n\n");
                    return 0;
                }
                else {
                    cvalue /= nvalue;
                    break;
                }
        }
    }

    printf("Value of expression: %.2f\n", cvalue);
    
    return 0;
}

