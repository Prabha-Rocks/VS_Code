//WAP to print power of integer 
#include<stdio.h>
int main()
{
    int base,exponent,power=1,expo;
    double power1=1.0;
    printf("Enter the base number:\n");
    scanf("%d",&base);
    printf("Enter the exponent number:\n");
    scanf("%d",&exponent);
    expo=exponent;
    //loop for positive exponent
    if(exponent>0)
    {
             while(exponent!=0)
            {
                power=power*base;
                exponent--;
            }
            printf("%d to the Power %d is %d \n",base,expo,power);
    }
    //loop for negative exponent
    else
    {
        while(exponent!=0)
        {
            power1=power1*(1.0/base);
            exponent++;
        }
        printf("%d to the Power %d is %.3f",base,expo,power1);
    }    
return 0;

}