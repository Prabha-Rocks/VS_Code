//WAP to count the number of elements in an array
/*number of element= sizeof whole array/size of 1 array element
number of elements = sizeof(a)/sizeof(a[0])*/
#include<stdio.h>
int main()
{
    int a[]={23,46,1,2,3,4,5,6,7,8,90,0,1,4,1,4,5,33,22,78};
    printf("Number of elements in array: %d",sizeof(a)/sizeof(a[0]));
    //Output: Number of elements in array:20
    return 0;
}