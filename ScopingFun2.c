//Function Scoping is necessary if we want to use Variable names
#include<stdio.h>
int fun1(int);//Function Prototype
int fun2(int);//Function Prototype
int a=5;//Global variable
int main()
{
    int a=10;
    a=fun1(a);//Actual Parameter
    printf("%d",a);//Output:25
    return 0;
}
int fun1(int b)//Formal Parameter
{
    b=b+10;
    b=fun2(b);
    return b;
}
int fun2(int b)
{
    int c;
    c=a+b;
    return c;
}