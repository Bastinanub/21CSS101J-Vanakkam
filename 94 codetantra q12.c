#include <stdio.h>

int main() {
    int N;
    float odd;
    scanf("%d",&N);
    if (N%2==0)
    {printf("0");}
    else{
        odd =N/2+1;
        printf("%0.9f",odd/N);
    }

    return 0;
}
