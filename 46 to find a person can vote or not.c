//voting program 
#include <stdio.h>

int main()
{
 int age;
 printf("enter your age\n");
 scanf("%d",&age);
 if(age >=18)
 {
     printf("can vote");
 }
 else
 {
     printf("cannot vote");
 }
    return 0;
}