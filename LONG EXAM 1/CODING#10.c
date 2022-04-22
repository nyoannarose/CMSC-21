#include <stdio.h>

int main(void)
{
     float n, x, i;

     printf("Enter the number: ");
     scanf("%f", &x);

     n = x/2;

     for (i = 0; i < 100; i++)
         n = n - (((n*n) - x)/(2*n));

     printf("The square root of %.0f is %.4f.\n", x, n);

     return 0;

}