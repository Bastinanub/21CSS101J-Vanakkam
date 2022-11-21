#include <stdio.h>

int main()
{
printf("Register number: RA2211042010007\n\n");
int matrix1[10][10], matrix2[10][10], sumOfMatrix[10][10];

printf("Enter first 3*3 matrix : ");
for(int i = 0; i < 3; i++)
{
for(int j = 0; j < 3; j++)
{
scanf("%d ", &matrix1[i][j]);
}
}

printf("\nEnter second 3*3 matrix: ");
for(int i = 0; i < 3; i++)
{
for(int j = 0; j < 3; j++)
{
scanf("%d ", &matrix2[i][j]);
}
}

printf("\n Sum of both matrix is :\n");
for(int i = 0; i < 3; i++)
{
for(int j = 0; j < 3; j++)
{
sumOfMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
printf("%d ", sumOfMatrix[i][j]);
}
printf("\n");
}
return 0;
}
