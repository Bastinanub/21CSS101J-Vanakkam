#include <stdio.h>
int main()
{
    printf("Register number: RA2211042010007\n\n");
    int alvqntoffood,messcnt,dividedqnt,remfood;
    scanf("%d",&alvqntoffood);
    scanf("%d",&messcnt);
    dividedqnt=alvqntoffood/messcnt;
    remfood=alvqntoffood%messcnt;
    printf("%d",dividedqnt);
    printf(" ");
    printf("%d",remfood);
    return 0;
}
