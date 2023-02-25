/*strcat() is string concatinate function to concatinate two strings
prototype:char* strcat(char* str1,constant char* str2); */
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5],str1[20];
    strcpy(str,"Hello this is");
    strcpy(str1," Prabha");
    strcat(str,str1);
    printf("%s",str);//output: Hello this is Prabha
    return 0;
}