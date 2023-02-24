//WAP to enter and print string using scanf
#include<stdio.h>
int main()
{
    char a[10];
    printf("Enter String: ");
    scanf("%6s",a);//%6s means it can take only 6 char input in string
    printf("%s",a);
    return 0;
}