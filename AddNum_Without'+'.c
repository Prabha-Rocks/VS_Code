//WAP to add two numbers without using '+' Operator
//Idea: Use Increment and Decrement operators 
/*Algorithm: 1)Increment x(x++), decrement y(y--) until it reaches 0, 2) the 
value of x is the sum*/
// It is used to add two positive numbers only
#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter values for x and y : ");
    scanf("%d  %d",&x,&y);
// Loop to Increment x(x++), decrement y(y--) until it reaches 0
while(y!=0)//Loop stops when y decrements to 0
{
    x++;
    y--;
}
printf("The sum of x and y is:%d ",x);
return 0;
}