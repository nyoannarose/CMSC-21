//C Program that prints int and float values in various formats

#include <stdio.h> //Preprocessor Directive

int main (void) //Main Function 
{
    //Variable Declaration
    int i; 
    float x; 

    //Assigning Values
    i = 40;
    x = 839.21f;
    
    //Printing the Results
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i) ; //Display integers in various formats
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x) ; //Display floats in various formats
    
    return 0;
}