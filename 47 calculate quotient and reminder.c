#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int result;
    printf("enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    result = num1/num2;
    printf("%d/%d is %d",num1,num2,result);
    result = num1%num2;
    printf(" with a reminder of :%d\n",result);
    return 0;
}
