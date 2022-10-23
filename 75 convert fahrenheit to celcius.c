#include <stdio.h>

int main(void)
{
    printf("Register number: RA2211042010007\n\n");
    float celcius;
    float fahrenheit;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celcius = (fahrenheit-32)/1.8;
    printf("Fahrenheit temperature is: %0.2f\n",fahrenheit);
    printf("Celcius temperature is: %0.2f\n",celcius);
     
    return 0;
}
