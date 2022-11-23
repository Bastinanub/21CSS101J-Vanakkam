#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i+=2)
    {
        sum += i;
    }

    printf("Sum of odd numbers = %d", sum);

    return 0;
}
