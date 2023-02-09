#include<stdio.h>
int f(j)
{
    static int i=50;
    int k;
    if(i==j)
    {
        printf("something \n");
        k=f(i);
        return 0;
    }
    else return 0;
}
int main()
{
    int j;
    printf("Enter val for j: ");
    scanf("%d",&j);
    f(j);
    return 0;
}
/*Output: for j=50 the loop will run infinite times and
 the runtime of stack will exhaust, 'something' will 
 be printed infinite times 
 For all other values of j apart from 50 the 0 will 
 be returned nothing will be printed on screen */