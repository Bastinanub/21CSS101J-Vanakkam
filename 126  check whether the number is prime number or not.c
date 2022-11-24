#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int i, num, isPrime;
    isPrime = 1; 

    /* Input a number from user */
    printf("Enter any number to check prime: ");
    scanf("%d", &num);

    for(i=2; i<=num/2; i++)
    {
        /* Check divisibility of num */
        if(num%i==0)
        {
            /* Set isPrime to 0 indicating it as composite number */
            isPrime = 0;

            /* Terminate from loop */
            break;
        }
    }
    if(isPrime == 1 && num > 1)
    {
        printf("%d is prime number", num);
    }
    else
    {
        printf("%d is composite number", num);
    }

    return 0;
}
