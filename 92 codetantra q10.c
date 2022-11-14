#include <stdio.h>

int main() {
    printf("Register number: RA2211042010007\n\n");
    int n;
    scanf("%d",&n);
        if(n<10)
            printf("Insufficient Earning");
        else if(n<100)
        printf("Very Low Earning");
        else if(n<1000)
        printf("Low Earning");
        else if(n<10000)
        printf("Sufficient Earning");
        else if(n>10000)
        printf("High Earning");

    return 0;
}
