//Q1)Program to add any number (-ve , +ve) without using '+' operator
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter values for x and y : ");
    scanf("%d  %d",&x,&y);
// Loop to Increment x(x++), decrement y(y--) until it reaches 0
if(y>0)
{
    while(y!=0)//Loop stops when y decrements to 0
    {
        x++;
        y--;
    }
}
else if(y<0)
    while(y!=0)
    {
        x--;
        y++;
    }
printf("The sum of x and y is:%d \n",x);
//Q2)WAP to add two numbers using HALF ADDER method and Bitwise operators
/* Goal of this prog 
Carry= make carry 0 , produce the required sum*/
int a,b,sum,carry;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
//Loop to perform sum(bitwise xor ^) carry (bitwise AND &)
while(b!=0)
{
    sum = a^b;
    carry =(a&b)<<1;// << 1 is used when carry is generated and has to be left shifted
    a=sum;
    b=carry;
}
printf("The sum is: %d",sum);
return 0;
}