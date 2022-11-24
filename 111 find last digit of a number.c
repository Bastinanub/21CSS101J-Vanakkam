#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int n, lastDigit;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    /* Get the last digit */
    lastDigit = n % 10;

    printf("Last digit = %d", lastDigit);

    return 0;
}
