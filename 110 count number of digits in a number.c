#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    long long num;
    int count = 0;
    printf("Enter any number: ");
    scanf("%lld", &num);
    do
    {
        count++;
        num /= 10;
    } while(num != 0);

    printf("Total digits: %d", count);

    return 0;
}
