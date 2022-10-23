
#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int num_1;
    int num_2;
    int product;
    int sum;
    int total;
    printf("Enter the first number: ");
    scanf("%d",&num_1);
    printf("Enter the second number: ");
    scanf("%d",&num_2);
    product = num_1*num_2;
    sum = num_1+num_2;
    total = (sum*sum)+product*(sum-num_1)*(product+num_2);
    printf("Total = %d\n",total);
    
     return 0;
}
