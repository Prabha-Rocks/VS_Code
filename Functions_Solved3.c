// Find Output of Following Code
#include <stdio.h>
int fun()
{
    /*Static Variable: Static Variables do not get 
    destroyed even after the function finishes */
    static int num =16;
    return num--;
}
int main()
{
    //for(initialization;condition;increment/decrement/iteration)
    for(fun();fun();fun())
    printf("%d ",fun());//Output: 14 11 8 5 2
}
