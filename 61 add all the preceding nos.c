//take number from user and add all the preceding numbers
#include <stdio.h>
int main()
{
 int t,sum_n=0;
 scanf("%d",&t);
 for(int i=1;i<=t;i++)
 {
     sum_n = sum_n +i;
 }
 printf("%d",sum_n);
    return 0;
}
