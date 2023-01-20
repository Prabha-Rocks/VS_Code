#include<stdio.h>
int main()
{
    //Wap to take input and add two numbers
    int a,b;
    printf("Enter a number:%d \n",a);
    scanf("%d",&a);
    printf("Enter second number:%d \n",b);
    scanf("%d",&b);
    printf("The sum:%d +%d =%d\n",a,b,a+b);
    //Shorthand Bitwise Operators
    int c= 7;
    c^=5;
    printf("%d",printf("%d \n",c+=3));
    //MCQ Question, vid 36 ,Neso
    unsigned int var=10;
    printf("\n %d",~var);
    return 0;
    
}