/*Used to compare between two strings
prototype:int strcmp(const char* s1,const char* s2);*/
//WAP to compare two strings
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="abc";
    char s2[]="abcDf";
    if(strcmp(s1,s2)<0)
        printf("s1 is less than s2");//Output
    else
        printf("s1 is greater or equal to s2");
    return 0;
}