#include <stdio.h>

int main (void)
{
    int i, j1, j2, j3, j4, k1, k2, k3, k4;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);

    k4 = i % 8; j4 = i / 8;
    k3 = j4 % 8; j3 = j4 / 8;
    k2 = j3 % 8; j2 = j3 / 8;
    k1 = j2 % 8; j1 = j2 / 8; 

    printf("In octal, your number is: %d%d%d%d%d\n", j1, k1, k2, k3, k4);
    
    return (0);
}

