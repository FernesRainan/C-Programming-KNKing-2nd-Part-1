#include <stdio.h>

int main (void)
{
    int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15;
    int row0, row1, row2, row3;
    int col0, col1, col2, col3;
    int dia0, dia1;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &i0, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12, &i13, &i14, &i15);

    row0 = i0 + i1 + i2 + i3;
    row1 = i4 + i5 + i6 + i7;
    row2 = i8 + i9 + i10 + i11;
    row3 = i12 + i13 + i14 + i15;

    col0 = i0 + i4 + i8 + i12;
    col1 = i1 + i5 + i9 + i13;
    col2 = i2 + i6 + i10 + i14;
    col3 = i3 + i7 + i11 + i15;

    dia0 = i0 + i5 + i10 + i15;
    dia1 = i3 + i6 + i9 + i12;

    printf("\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15);
    printf("\nRow sums: %d %d %d %d\n", row0, row1, row2, row3);
    printf("Column sums: %d %d %d %d\n", col0, col1, col2, col3);
    printf("Diagonal sums: %d %d\n", dia0, dia1);

    return (0);
}

