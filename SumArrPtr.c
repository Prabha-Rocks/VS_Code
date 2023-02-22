//WAP to print sum of Array elements using pointers
#include<stdio.h>
int main()
{
    int a[]={10,20,50,10};
    int sum=0, *p;
    for(p=&a[0];p<=&a[3];p++)//(p=0;p<=size;p++)
        sum+=*p;//sum=sum+a[p];
    printf("Sum of Array elements:%d",sum);//output:90
    return 0;
}