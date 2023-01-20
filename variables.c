#include<stdio.h>
int main()
{
    // Initializing and updating value of a variable
    int A=10;
    A=24;
    printf("%d \n",A);//Output : 24
    //Assigning value of one variable to another
    int B, V=20;
    B = V;
    printf("%d \n",B);//Output :20
    int w,x,y;
    w=x=y=A;
    printf("%d,%d,%d ",w,x,y);//Output :24,24,24
    int a=2,b=3,c=6;
    int r= (a + b) * c / b;
    printf("\n( %d + %d ) * %d / %d",a , b, c);//Output :(2 + 3)*6/3 
    printf(" Result= %d",r);//Output :Result = 10
    return 0;

}