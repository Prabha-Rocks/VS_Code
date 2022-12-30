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
    printf("%d,%d,%d ",w,x,y);
    int a=2,b=3,c=6;
    int r= (a + b) * c / b;
    printf("\n( %d + %d ) * %d / %d",a , b, c);
    printf(" Result= %d",r);
    return 0;

}