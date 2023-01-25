//A Function Definition consist of a block of code capable of performing a specific task
//Use funtion to perform addition
#include<stdio.h>
int add(int,int);// Prototype/Function Declaration , must contain ';' at the end
int main()
{
    int m=20,n=30,sum;
    sum=add(m,n);/*Function Call,here the datatype of 'add' 
    and the return type of m,n must not be mentioned, contains ';' at the end
    Here m,n are arguements(actual parameter) */
    printf("sum:%d",sum);
}
int add(int a,int b)/*Function Definition,here the datatype 
of add and the return type of a,b has to be mentioned, Does not contain ';'
here int a, int b are formal parameters*/
{
    return (a+b);
}
/*Parameter: It is a variable in the declaration and denfition of function
Argument:It is the Actual Parameter that gets passed to a funtion */