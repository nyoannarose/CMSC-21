#include <math.h>
#include <stdio.h>
 
// Function to find the square-root of N
double findSQRT(double N) { return pow(2, 0.5 * log2(N)); }
 
// Driver Code
int main()
{
    int N;

    printf("Enter a positive number: "); 
    scanf("%d", &N);


    if (N<0){
    printf("Invalid Input");
	}
	
	else{
	printf("%f ", findSQRT(N));
	}
 
    return 0;
}