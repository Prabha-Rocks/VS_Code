/*Function declaration means declaring properties of funtion to the compiler
prototype of declaration:
    int     fun         (int,char)
ReturnType NameOfFunc TypeOfParameter */
// Functon Declaration Example
#include<stdio.h>
char fun();//Function Prototype has ';'(Function Declaration)
int main()
{
    char c=fun();
    printf("The character is %c",c);//Output: The character is a
}
char fun()//Function Definition
{
 return 'a';
}