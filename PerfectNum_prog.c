/*Perfect Number: A Perfect Number is a +ve integer that is equal to the sum of 
all its proper divisors excluding itself
For eg: 6 is a perfect Number , Proper +ve divisors of 6 are 1,2,3 and its sum=1+2+3=6*/
//WAP to check for a Perfect number
#include <stdio.h>
int main()
{
    int rem,sum=0,num,i;
    printf("Enter a Number:");
    scanf("%d",&num);
    //Loop to check for a perfect number
    for(i=1;i<num;i++)
    {
        rem=num%i;
    if(rem==0)//This if section helps us to find sum of all the proper +ve divisors of the num

        {
            sum=sum+i;
        }
    }
    if(sum==num)
        printf("Its a perfect number");
    else
        printf("Its Not a perfect number");
    return 0;
}