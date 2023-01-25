/*Funtion is a set of statements that take input from user to 
perform some computation and produces output
Syntax:ReturnType FuncName(setOfInput)*/
// Basic Program to Calculate Area of Rectangle using function
#include<stdio.h>
int areaOfRect(int len,int wid)//Function Definition 
{
    int area;
    area=len*wid;
    return area;
}
int main()
{
    int l=10,b=5;
    int area=areaOfRect(l,b);
    printf("Area:%d\n",area);//Area:50
    l=50,b=20;
    area=areaOfRect(l,b);
    printf("Area:%d",area);//Area:1000
}