#include<stdio.h>
void get(int n)
{
    if(n<1)
    return;
    get(n-1);
    get(n-3);
    printf("%d ",n);//Output:1 2 3 1 4 1 2 5 1 2 3 6
}
void main()
{
    get(6);
}
/*If get(6) is being called in main() then how many 
times will get() function be involved before 
returning to the main(): 25 calls*/