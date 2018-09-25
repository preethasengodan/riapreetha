#include<stdio.h>
void main()
{
    int year;
    printf("enter a year:\t");
    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("It is a leap year");
            }
            else
            printf("It is not a leap year");
        }
        else
        {
            printf("It is a leap year");
        }
    }
    else
    {
        printf("it is not a leap yer");
    }
}
