#include <stdio.h>
int main() {
    int base, exp;
    long double result = 1.0;

    //base
    printf("Base=2\n");
    base=2;
    
    //exponent
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    
    //result/answer
    printf("Answer = %.0Lf", result);
    return 0;
}