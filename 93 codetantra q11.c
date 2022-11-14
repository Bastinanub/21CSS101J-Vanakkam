#include <stdio.h>

int main() {
    char X,Y;
    int a,b;
    scanf("%c %c",&X,&Y);
    a = (int)(X);
    b = (int)(Y);
    if (a==b)
    printf("=");
    else if(a>b)
    printf(">");
    else
    printf("<");

    return 0;
}
