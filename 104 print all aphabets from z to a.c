#include <stdio.h>

int main()
{
    char ch;

    printf("Alphabets from a - z are: \n");
    for(ch='z'; ch>='a'; ch--)
    {
        printf("%c\n", ch);
    }

    return 0;
}
