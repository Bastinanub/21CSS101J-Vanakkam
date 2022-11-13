#include <stdio.h>

int main() {
    printf("Register number: RA2211042010007\n\n");
    int i,n;
    printf("Enter n: \n"),scanf("%d",&n);
    for(i=0;i<=n;i++)
    { if(i%2==0)
    printf("%d\n",i);
    }
    return 0;
}
