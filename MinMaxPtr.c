#include<stdio.h>
int main()
{
    int a[10]={67,45,90,0,9,-1,-22,999};
    int *p = a;//Pointer to the first element of array
    int largest = *p;//Assuming first element of array to be the largest
    int smallest = *p;//Assuming first element of array to be the smallest
    int i;
    for(i=1;i<10;i++)//using a for loop to access from 2nd element to n-1 elements
    {
        if(p[i]>largest)
            largest = p[i];//update largest if current element is greater
        if(p[i]<smallest)
            smallest = p[i];//update smallest if current element is smaller
    }
    printf("largest element of array:%d\n",largest);//Output:999
    printf("smallest element of array:%d",smallest);//Output:-22
    return 0;
}