#include <stdio.h>
int main()
{
    //Defining the variables
    int a,b;
   
   //Assigning Values
   b=3;
   a=2;
   
  
    
    
    if (b == 3 && a==2){
    //Output A
        printf("A\n");
        printf("*****\n");
        printf(">>>>>\n");
        printf("<<<<<\n");
    
    //Output B    
        printf("\nB\n");
        printf( "*****\n" ); 
    
    //Output C    
        printf("\nC\n");
        printf("*****\n");
        printf("<<<<<\n");
        
    }
    
    else {
        printf( "	" );
        printf( ">>>>>" );
        printf( "<<<<<" );
    }
    return 0;
}