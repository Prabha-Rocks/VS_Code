#include<stdio.h>
#include<limits.h>
int main()
{
    // To print size of different datatypes
    printf("%d \n",sizeof(int));//Output:4
    printf("%d \n",sizeof(long int ));//Output:4
    printf("%d \n",sizeof(long));//Output:4
    printf("%d \n",sizeof(char));//Output:1
    printf("%d \n",sizeof(long long));//Output:8
    printf("%d \n",sizeof(float));//Output:4
    printf("%d \n",sizeof( double));//Output:8
    //to find limits of some datatypes
    //size of signed integer
    int a=INT_MIN,b=INT_MAX;
    printf("Range of signed int:%d to %d",a,b);//Output:Range of signed integer int:-2147483647
    //size of unsigned integer
    int c=0,d= UINT_MAX;
    printf("\n Range of unsigned integer: %u to %u",c,d);//Output: Range of unsigned integer:0 to 4294967295
    // size of short integer
    int e=SHRT_MIN ,f=SHRT_MAX;
    printf(" \n Range of signed short integer:%d to %d",e,f);//Output:Range of signed short int:-32768 to 32767
    //size of unsigned short integer
    int g=0 , h=UINT_MAX;
    printf("\n Range of unsigned short integer: %u to %u \n",g,h);//Output:Range of unsigned short int: 0 to 4294967295 
    //printing float values
    float var= 4.0/9.0;
    printf("%f \n",var);//Output:0.444444 float by default takes upto 6 places of decimal
    int z=4/9;
    printf("%d \n",z);//Output:0
    return 0;
}