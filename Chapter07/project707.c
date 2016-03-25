// calculating two fraction with all operator //


#include <stdio.h>

int main (void)
{
    int num1, denom1, num2, denom2, result_num, result_denom, x,y, remainder;
    char operator;

    printf("\nEnter two fractions separated either by a\n");
    printf("plus (+), minus (-), multiplay(*), or divide (/) sign: ");

    scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2);

    switch (operator){
        
        case '+':
            result_num = num1 * denom2 + num2 * denom2;
            result_denom = denom1 * denom2;
            printf("\nThe sum is ");
            break;

        case '-':
            result_num = num1 * denom2 - num2 * denom2;
            result_denom = denom1 * denom2;
            printf("\nThe differences is ");
            break;

        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            printf("\nThe product is ");
            break;

        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            printf("\nThe quotient is ");
            break;
        default:
            printf("\nInvalid operator. Please run program again\n\n");
            return 0;
    }

    // compute Greatest common denominator //

    x = result_num;
    y = result_denom;

    while (y != 0){
        remainder = x % y;
        x = y;
        y = remainder;
    }

    // display fraction in lowest terms //

    printf("%d/%d\n", result_num / x, result_denom / x);

    return 0;
}

