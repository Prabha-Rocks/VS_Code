/*the strlen() is used to determine length of a string 
Prototype:size_t strlen(const char* str)*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="Hello Prabha";
    printf("%d",strlen(str));//Output:12
    return 0;
}