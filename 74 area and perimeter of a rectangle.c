#include <stdio.h>

int main(void)
{
    printf("Register number: RA2211042010007\n\n");
    float length;
    float breadth;
    float area;
    float perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&breadth);
    
    area = length*breadth;
    perimeter = 2*length+2*breadth;
    
    printf("The area of the rectangle is: %f\n",area);
    printf("The perimeter of the rectangle is: %f\n",perimeter);
    
    
     return 0;
}
