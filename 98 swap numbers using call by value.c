#include<stdio.h>
void swap(int n1, int n2)
{
  printf("Register number: RA2211042010007\n\n");
  int temp = n1;
  n1 = n2;
  n2 = temp;

}
int main() {
    int x = 20;
    int y = 68;
    printf("The numbers before swapping n1 and n2 %d %d \n",x, y);
    swap(x, y);
    printf("The numbers after swapping n1 and n2 %d %d \n",x, y);
    return 0; 
}
