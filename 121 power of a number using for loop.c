#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int base, exponent;
    long long power = 1;
    int i;

    /* Input base and exponent from user */
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    /* Multiply base, exponent times*/
    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);

    return 0;
}
