//WAP to reverse the elements of an array
#include<stdio.h>
int main()
{
    int a[20];
    int i,n;
    printf("Enter Array Length: ");
    scanf("%d",&n);
    printf("Enter Array Values:");
    for(i=0;i<n;i++)//To take array input
    {
        scanf("%d",&a[i]);
    }
    printf("Array in original order:");
    for(i=0;i<n;i++)//Loop to print array in original order
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Array in reversed order:");
    for(i=n-1;i>=0;i--)//Loop to reverse the elements of array
    {
        printf("%d ",a[i]);
    }
    return 0;
}