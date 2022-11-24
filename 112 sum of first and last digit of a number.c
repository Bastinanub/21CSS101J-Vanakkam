#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int num, sum=0, firstDigit, lastDigit;

    /* Input a number from user */
    printf("Enter any number to find sum of first and last digit: ");
    scanf("%d", &num);
    
    /* Find last digit to sum */
    lastDigit = num % 10;
    

    /* Copy num to first digit */
    firstDigit = num;

    /* Find the first digit by dividing num by 10 until first digit is left */
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;


    /* Find sum of first and last digit*/
    sum = firstDigit + lastDigit; 

    printf("Sum of first and last digit = %d", sum);

    return 0;
}
