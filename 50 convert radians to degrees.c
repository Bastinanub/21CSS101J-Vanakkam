#include <stdio.h>
#define degree_factor 57.295779
int main()
{
    printf("Register number: RA2211042010007\n");
    double radians;
    double degrees;
    printf("enter the angle in radians: ");
    scanf("%lf",&radians);
    
    degrees = radians * degree_factor;
    printf("%6.3f radians is %6.3f degrees\n",radians,degrees);
   
    return 0;
}
