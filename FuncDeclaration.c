// Functon Declaration Example
#include<stdio.h>
char fun();//Function Prototype has ';'(Function Declaration)
int main()
{
    char c=fun();
    printf("The character is %c",c);
}
char fun()//Function Definition
{
 return 'a';
}