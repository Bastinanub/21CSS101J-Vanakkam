#include<stdio.h>
int main(void)
{
    int i;
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    printf("*** Multiplication table ***\n");
    for(i=1;i<=10;i++)
{
    printf("\n%d x %d = %d\n",number,i,number*i);
}
}
