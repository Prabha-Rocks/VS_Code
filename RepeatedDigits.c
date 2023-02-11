//WAP to check whether a digit appears more than once in a set of numbers.
#include<stdio.h>
int main()
{
    int n,rem;
    int seen[10]={0};/*[10] is taken a as digits are from 0 to 9, 
    Initially array taken is 0 at all index*/
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(seen[rem]==1)/*if the digit is already seen 1 will be 
        present in the location, condition satisfied */
        break;//breaks if , if condition satisfied
        seen[rem]=1;//place 1 in the location if digit not seen
        n=n/10;//gives the quotient or remaining values
    }
    if(n>0)//n=0 digit not seen more than once,n>0 seen more than once
        printf("Digits seen more than once in num");
    else
        printf("Digits not seen more than once in num");
return 0;
}