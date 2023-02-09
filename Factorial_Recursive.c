//WAP to find Factorial of a number using Recursive method.
#include<stdio.h>
int fact(n)
{
    if(n==1)// Base Case
        return;
    else
        return n*fact(n-1);//Recursive Procedur
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial of %d is :%d",n,fact(n));
    return 0;
}

