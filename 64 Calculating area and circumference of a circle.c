#include <stdio.h>
#define PI 3.1416
int main()
{
    printf("Register number: RA2211042010007\n\n");
    float circumference;
    float radius;
    float area;
    printf("enter the value of the radius: ");
    scanf("%f",&radius);
    
    circumference = 2*PI*radius;
    area = PI*radius*radius;
    printf("\nRadius is:%10.2f",radius);
    printf("\nCircumference is:%10.2f",circumference);
    printf("\nArea is:%10.2f",area);
    return 0;
}
