#include <stdio.h>

int main(void)
{
    printf("Register number: RA2211042010007\n\n");
    float celcius;
    float fahrenheit;
    printf("Enter the temperature in celcius: ");
    scanf("%f",&celcius);
    fahrenheit = (celcius*9/5)+32;
    printf("celcius temperature is: %0.2f\n",celcius);
    printf("Fahrenheit temperature is: %0.2f\n",fahrenheit);
     
    return 0;
}
