#include<stdio.h>
int main()
{
    //Wap to take input and add two numbers
    int a,b;
    printf("Enter a number:",a);
    scanf("%d",&a);
    printf("Enter second number:",b);
    scanf("%d",&b);
    printf("The sum:%d +%d =%d\n",a,b,a+b);//Output:a+b=%d
    //Shorthand Bitwise Operators
    int c= 7;
    c^=5;//c=7 XOR 5 in binary operation which is equivalent to 2
    printf("%d",printf("%d",c+=3));//Output:c=2+3=5, for ouside operation %d=1(char takes 1 byte)
    //Output is 51
    //MCQ Question, vid 36 ,Neso
    unsigned int var=10;
    printf("\n %d",~var);//Output:-11 ,~ means negative
    /*var= 10 in binary 0000 0000 1010
    since ~var needed 1 111 1111 0101(1's complement)
    Computer stores val in 2's complement 
    So, 1 000 0000 1010(1's complement)
    1 000 0000 1011(1's complement+1 )= -11 */
    return 0;
    
}