/*Leap Year:An Year having 366 days, It arrives every 4 years 
and the extra day is 29th Feb
To check for leap year we have to see whether the year is 
divisible by 400 if its a century year or if its divisible by 4 */
#include <stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    //Condition check for Century Leap Year
    if(year%400==0)
        printf("Its a Leap Year");
    else if (year%100==0)
        printf("Its a century year but Not a Leap year");
    else if (year%4==0)
        printf("Its a Leap Year");
    else
    printf("Its not a leap year");    
return 0;    
}