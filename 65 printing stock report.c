#include <stdio.h>

int main()
{
    printf("Register number: RA2211042010007\n\n");
    printf("\tPart Number\t\tQty on hand\t\tQty on order\t\tPrice\n\t\t");
    printf("%06d\t\t%7d\t\t\t%7d\t\t\t\t$%7.2f\n\t\t",31235,22,86,45.62);
    printf("%06d\t\t%7d\t\t\t%7d\t\t\t\t$%7.2f\n\t\t",321,55,21,122.00);
    printf("%06d\t\t%7d\t\t\t%7d\t\t\t\t$%7.2f\n\n\t\t",28762,0,24,0.75);
    printf("*** End of report ***");
    return 0;
}
