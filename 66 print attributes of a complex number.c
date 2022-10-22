#include <stdio.h>
#include <math.h>
#include <complex.h>
int main()
{
    printf("Register number: RA2211042010007\n\n");
    double complex x=4+4*I;
    double complex xc;
    xc = conj(x);
    printf("%f%f%f\n",creal(x),cimag(x),cabs(x),carg(x));
    return 0;
}
