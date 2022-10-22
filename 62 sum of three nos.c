#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n");
    int a;
    int b;
    int c;
    int sum;
    printf("enter three numbers\n");
    printf("int he form: nnn nnn nnn <return>\n");
    scanf("%d %d %d", &a,&b,&c);
    sum = a+b+c;
    printf("the total is: %d\n\n",sum);
    return 0;
}
