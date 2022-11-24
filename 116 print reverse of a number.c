#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int num, reverse = 0;

    /* Input a number from user */
    printf("Enter any number to find reverse: ");
    scanf("%d", &num);

    /* Repeat the till 'num' becomes 0 */
    while(num != 0)
    {
        reverse = (reverse * 10) + (num % 10);

        /* Remove last digit from 'num' */
        num /= 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}
