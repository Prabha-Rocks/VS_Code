//WAP to find Factorial of a number using the iterative method
#include<stdio.h>
int fact(n)
{
    int result = 1;
    while(n!=0)
    {
        result = result *n;
        n--;
    }
    return result;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The Factorial of %d is : %d",n,fact(n));
    return 0;
}