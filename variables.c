#include<stdio.h>
int main()
{
    // Initializing and updating value of a variable
    int A=10;
    A=24;
    printf("%d \n",A);
    //Assigning value of one variable to another
    int B, V=20;
    B = V;
    printf("%d \n",B);
    int w,x,y;
    w=x=y=A;
    printf("%d,%d,%d",w,x,y);
    return 0;

}