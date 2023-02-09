/*Static Scoping: In Static Scoping we check the local variable if we dont find 
a proper definition we check for global variables..
Dynamic Scoping:In Dynamic scoping we check the local variable if 
we dont find a proper def we check each and every outer function
 for the value of the variable.. */
//Find the output of code in static and dynamic scoping
#include<stdio.h>
int a,b;
void print()
{
    printf("%d %d",a,b);//Output: Static Scoping= 3 1 , Dynamic Scoping= 3 4
}
int fun1()
{
    int a,c;
    a=0;b=1;c=2;
    return c;
}
void fun2()
{
    int b;
    a=3;b=4;
    print();
}
int main()
{
    a=fun1();
    fun2();
}