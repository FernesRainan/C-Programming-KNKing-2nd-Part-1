#include <stdio.h>

int main (void)
{
    int prefix, group_id, pub_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group_id, &pub_code, &item_num, &check_digit);

    printf("GSl prefix: %d\nGroup identifier: %d\nPhublisher code: %d\nItem number: %d\nCheck digit: %d\n", prefix, group_id, pub_code, item_num, check_digit);

    return (0);
}


