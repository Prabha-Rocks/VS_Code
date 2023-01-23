//WAP to Convert Binary to Decimal number
//to convert binary to decimal we multiply 
#include <stdio.h>
int main()
{
    int binary,rem,decimal=0,weight=1;
    printf("Enter Binary to Convert: ");
    scanf("%d",&binary);
    //Loop to convert to Decimal number
    while(binary!=0)
    {
        rem=binary%10;//to obtain last digit of binary
        decimal=decimal+rem*weight;
        binary=binary/10;//quotient printing
        weight=weight*2;
    }
printf("The Decimal Equivalent of the Binary:%d",decimal);
return 0;
}