#include<stdio.h>

int main(void)
{
    int start_day, days_in_month, i, day_of_week;
    
    //number of days in month
    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);
    
    //starting day
    printf("(1=Sun, 2=Mon, 3=Tues, 4=Wed, 5=Thurs, 6= Fri, 7=Sat)");
    printf("\nEnter the starting day of the week: ");
    scanf("%d", &start_day);

    //checker
    if (days_in_month == 32)
    {
        printf("Invalid Input");
        return 0;
    }
    
    else if (days_in_month == -1)
    {
        printf("Invalid Input");
        return 0;
    }
    
    else if (days_in_month == 0)
    {
        printf("Invalid Input");
        return 0;
    }
    
    else if (days_in_month == 27)
    {
        printf("Invalid Input");
        return 0;
    }
    
    
    for(i = 1 ; i < start_day; i++) {
        printf("   ");
    }

    for(i = 1; i <= days_in_month; i++) {
        printf("%2d ", i);
        if((i + start_day - 1)%7 ==0) {
            printf("\n");
        }
    
    }
    return 0;
}