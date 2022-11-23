#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    char ch;

    printf("Alphabets from a - z are: \n");
    for(ch='z'; ch>='a'; ch--)
    {
        printf("%c\n", ch);
    }

    return 0;
}
