//C program that adds 2 fractions

#include <stdio.h> //Preprocessor Directive
int main (void) //Main Function
{
    int num1, denom1, num2, denom2, result_num, result_denom; //Data Types
    
    printf("Enter first fraction: "); //User Input
    scanf("%d/%d", &num1, &denom1);  //Reads Formatted Data

    printf("Enter second fraction: "); //User Input
    scanf("%d/%d", &num2, &denom2); //Reads Formatted Data
    
    //Formula (Addition of Fractions)
    result_num = num1*denom2+num2*denom1; //Numerator
    result_denom = denom1*denom2; //Denominator

    //Printing the results/sum
    printf("The sum is %d/%d\n", result_num, result_denom);
    
    return 0;
}

//Note: The result is not reduced into its lowest term.