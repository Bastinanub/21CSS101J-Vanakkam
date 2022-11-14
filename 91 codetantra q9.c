#include <stdio.h>

int main() {
    printf("Register number: RA2211042010007\n\n");
    int total_mins,hours,mins;
    scanf("%d",&total_mins);
    hours = total_mins/60;
    mins = total_mins%60;
    printf("%d Hours and %d Minutes",hours,mins);

    return 0;
}
