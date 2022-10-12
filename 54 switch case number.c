#include<stdio.h>  
int main()
{  
printf("Register number: RA2211042010007\n");
int number=0;     
printf("enter a number:");    
scanf("%d",&number);    
switch(number)
{    
case 10:    
printf("number is equals to 10");    
break;    
case 50:    
printf("number is equal to 50");    
break;    
case 100:    
printf("number is equal to 100");    
break;    
default:    
printf("number is not equal to 10, 50 or 100");    
}    
return 0;  
}    
