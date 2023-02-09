/*How to write a recursive function??
1)Divide the problem into smaller sub-problems
2)Specify base condition to stop recursion*/
/*WAP to find Factorial of a number using recursive method:
    Recursive procedure: Fact(n)=n*Fact(n-1) , Base Case: if(n==1) then return 1 */
#include<stdio.h>
int fact(int n)
{
    if(n==1)//Base case
        return 1;
    else
        return n*fact(n-1);//Recursive procedure
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is :%d",n,fact(n));
}    