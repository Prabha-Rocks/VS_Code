#include<stdio.h>
#include<limits.h>
int main()
{
    // To print size of different datatypes
    printf("%d \n",sizeof(int));
    printf("%d \n",sizeof(short ));
    printf("%d \n",sizeof(long));
    printf("%d \n",sizeof(char));
    printf("%d \n",sizeof(long long));
    printf("%d \n",sizeof(float));
    printf("%d \n",sizeof(double));
    //to find limits of some datatypes
    //size of signed integer
    int a=INT_MIN,b=INT_MAX;
    printf("Range of signed int:%d to %d",a,b);
    //size of unsigned integer
    int c=0,d= UINT_MAX;
    printf("\n Range of unsigned integer: %u to %u",c,d);
    // size of short integer
    int e=SHRT_MIN ,f=SHRT_MAX;
    printf(" \n Range of signed short integer:%d to %d",e,f);
    //size of unsigned short integer
    int g=0 , h=UINT_MAX;
    printf("\n Range of unsigned short integer: %u to %u",g,h);


    

    return 0;
}