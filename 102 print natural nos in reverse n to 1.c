#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int i, start;
    printf("Enter starting value: ");
    scanf("%d", &start);
    for(i=start; i>=1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
