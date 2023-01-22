/* Fibonacci Series:It is a series of Numbers in which next term is 
obtained by sum of previous terms fib(n)=fib(n-1)+fib(n-2)*/
// WAP to print Fibonacci series Upto n terms
#include<stdio.h>
int main()
{
    int n,a=0,b=1,result,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    //Loop to find next term by sum of previous terms
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        result=a+b;
        a=b;
        b=result;
    }
return 0;
}