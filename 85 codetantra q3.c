#include <stdio.h>
int main(void)
{
    printf("Register number: RA2211042010007\n\n");
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum += (i*i);
    printf("%d",sum);
}
