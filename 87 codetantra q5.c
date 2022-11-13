#include <stdio.h>

int main() {
    printf("Register number: RA2211042010007\n\n");
    int n,m,score=0;
    scanf("%d",&n);
    scanf("%d",&m);
    score = ((n-1)*(m-1)*2+m+n-2);
    printf("%d\n",score);

    return 0;
}
