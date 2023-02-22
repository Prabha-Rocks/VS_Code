//Find the mid of Array using pointer
#include<stdio.h>

int *findmid(int a[],int n);

int main()
{
    int a[100];
    int i,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    
    printf("enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int *mid=findmid(a,n);// *mid is dereference operator used to obtain the value at addressof mid
    
    printf("the mid value is %d",*mid);//printing the middle element of array
    return 0;
}
int *findmid(int a[],int n)  //here * operator tells that we are passing address to the main function
{
    return &a[n/2];//Passing the address of a[mid]
}