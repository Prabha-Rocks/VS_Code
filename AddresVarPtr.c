/*How to print address of variable??
use '%p' as format specifier in printf function*/
#include<stdio.h>
int main()
{
    int i=10;
    int *p=&i;
    printf("address of variable i:%p",p);//Output: address of variable 'i' in hex format
    return 0;
}