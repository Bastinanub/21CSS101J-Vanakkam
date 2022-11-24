#include <stdio.h>

int main()
{printf("Register number: RA2211042010007\n\n");
    
    int i, num1, num2, max, lcm=1;

    /* Input two numbers from user */
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);

    /* Find maximum between num1 and num2 */
    max = (num1 > num2) ? num1 : num2;

    /* First multiple to be checked */
    i = max;
    
    /* Run loop indefinitely till LCM is found */
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {

            lcm = i;

            /* Terminate the loop after LCM is found */
            break;
        }

        i += max;
    }

    printf("LCM of %d and %d = %d", num1, num2, lcm);

    return 0;
}
