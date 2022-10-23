
#include <stdio.h>
#define TAX_RATE 8.50
int main(void)
{
    printf("Register number: RA2211042010007\n\n");
    int quantity;
    float unit_price;
    float discount_rate;
    float tax_rate;
    float subtotal;
    float total;
    float discountAm;
    float sub_taxable;
    float taxAm;
    
    printf("Enter the number of items sold:         ");
    scanf("%d",&quantity);
    
    printf("Enter the unit price:         ");
    scanf("%f",&unit_price);
    
    printf("Enter the discount_rate:         ");
    scanf("%f",&discount_rate);
    
    subtotal = quantity*unit_price;
    discountAm = subtotal*discount_rate/100.0;
    sub_taxable = subtotal-discountAm;
    taxAm = subtotal*TAX_RATE/100.00;
    total = sub_taxable+taxAm;
    
    printf("\nQuantity sold:      %6d\n",quantity);
    printf("Unit Price of items:%9.2f\n",unit_price);
    printf("                    ----------------\n");
    printf("Subtotal:           %9.2f\n",subtotal);
    printf("Discount:          -%9.2f\n",discountAm);
    printf("Discounted total:   %9.2f\n",sub_taxable);
    printf("Sales tax:         +%9.2f\n",taxAm);
    printf("Total sales:        %9.2f\n",total);
    
     return 0;
}
