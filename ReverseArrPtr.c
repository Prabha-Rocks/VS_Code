//WAP to Reverse an array using pointer
#include<stdio.h>
#define N 5
int main()
{
    int a[N],*p;
    printf("Enter 5 elements in array: ");
    for(p=a;p<=a+N-1;p++)/*loop to enter elements in array,N=5,if base address
    of a is 1000 then a+N-1 is 1000+(5-1)*(4)=1016, a[0] base address 
    assumed=1000*/
    scanf("%d",p);
    printf("Reversed Array elements: ");
    for(p=a+N-1;p>=a;p--)//loop to reverse elements in array,(p=1016;p>=1000;p--)
    printf("%d ",*p);
    return 0;

}