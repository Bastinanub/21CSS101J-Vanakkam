#include <stdio.h>
#include <math.h>
#define pi 3.14
int main() {
    printf("Register number: RA2211042010007\n\n");
    float r;
    float volume;
    scanf("%f",&r);
    volume = (4.0/3.0)*pi*pow(r,3);
    printf("%0.6f",volume);

    return 0;
}
