#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    int i;

    /* Print ASCII values from 0 to 255 */
    for(i=0; i<=255; i++) 
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }

    return 0;
}
