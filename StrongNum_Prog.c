/*Strong number is a number in which the sum of factorial of 
individual digits of a number is equal to the number itself
Example 145=1!+4!+5!=145*/
#include<stdio.h>
int main()
{
    int n,fact=1,result=0,rem,i,q;
    printf("Enter a number: ");
    scanf("%d",&n);
    q=n;
    //Loop to calculate factorial of each digit and add it to result
    while(q!=0)
    {
        rem =q%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
    result=result+fact;
    fact=1;
    q=q/10;
    }
if(result==n)
    printf("It is a Strong Number");
else
    printf("It is Not a strong Number");
return 0;
}