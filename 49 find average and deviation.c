#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n");
    int num1;
    int num2;
    int num3;
    int num4;
    int sum;
    float average;
    
    printf("\nenter the first number: ");
    scanf("%d",&num1);
    
    printf("\nenter the second number: ");
    scanf("%d",&num2);
    
    printf("\nenter the third number: ");
    scanf("%d",&num3);
    
    printf("\nenter the fourth number: ");
    scanf("%d",&num4);
    
    sum = num1+num2+num3+num4;
    average = sum/4.0;
    
    printf("\n ******average is %6.2f ******",average);
    printf("\n");
    
    printf("\nfirst number: %6d -- deviation: %8.2f",num1,num1-average);
    printf("\nsecond number: %6d -- deviation: %8.2f",num2,num2-average);
    printf("\nthird number: %6d -- deviation: %8.2f",num3,num3-average);
    printf("\nfourth number: %6d -- deviation: %8.2f",num4,num4-average);
    
}
