#include <stdio.h>

int main (void)
{
    int item_number, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%-5.2f\t\t%.2d/%.2d/%d\n", item_number, price, month, day, year);

    return (0);
}

