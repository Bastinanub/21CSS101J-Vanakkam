
#include <stdio.h>
#include <math.h>
#include <complex.h>
int main()
{
    printf("Register number: RA2211042010007\n\n");
    double complex x=4+4*I;
    double complex y = 3-3*I;
    double sum;
    double dif;
    double mul;
    double divi;
    sum = x+y;
    dif = x-y;
    mul = x*y;
    divi = x/y;
    printf("%f%f%f\n",creal(sum),cimag(sum),cabs(sum),carg(sum));
    printf("%f%f%f\n",creal(dif),cimag(dif),cabs(dif),carg(dif));
    printf("%f%f%f\n",creal(mul),cimag(mul),cabs(mul),carg(mul));
    printf("%f%f%f\n",creal(divi),cimag(divi),cabs(divi),carg(divi));
    return 0;
}
