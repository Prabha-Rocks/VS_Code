#include<stdio.h>
#define PI 3.14159 //#define is a preprocessor which replaces Name with its value, Name is called Macros
#define sub(x,y) x-y
int main(){
    printf("%.2f \n",PI);//Output: 3.14
    printf("Subtraction of two numbers: %d\n",sub(9,4));//Subtraction of two numbers:5
    printf("Current Date:%s\n",__DATE__);// __DATE__ is Pre-defined Macro for printing current date
    printf("Current Time:%s\n",__TIME__);//__TIME__ is  Pre-defined Macro for printing the current time
    return 0;
}