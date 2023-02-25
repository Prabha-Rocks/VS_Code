/*Prototype:strncpy(destination,source,sizeof(dstination))
strncpy() is used to copy strings alongwith determining their 
length to avoid error*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10]="Hello";
    char str2[3];
    strncpy(str2, str1, sizeof(str2));
    printf("%s", str2);//Output: Hel
    return 0;
}