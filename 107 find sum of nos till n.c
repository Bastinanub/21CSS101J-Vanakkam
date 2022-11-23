#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d", n, sum);

    return 0;
}
