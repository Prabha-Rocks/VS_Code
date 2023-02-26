//using function pointer, to add two numbers
#include<stdio.h>
int add(int a,int b)//formal parameter ,Function Definintion
{
    return a + b;
}
int main()
{
    int result;
    int (*ptr)(int ,int )=&add;/*pointer to function add,address of add stored in 
    *ptr, 
    The function pointer ptr is initialized to the address of the add function 
    using the & operator*/
    result= (*ptr)(10,20);//actual parameter , Function initialization
    printf("Add:%d",result);//Output:30
    return 0;
}
