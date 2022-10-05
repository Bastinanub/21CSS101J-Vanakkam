#include <stdio.h>

int main() 
{
    int num1;
    int rightdigit;
    printf("enter the number: ");
    scanf("%d",&num1);
    rightdigit = num1%10;
    printf("\nthe right most digit is: %d",rightdigit);
    return 0;
}
