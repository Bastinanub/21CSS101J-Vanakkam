#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n"
    int i, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d : \n", n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
