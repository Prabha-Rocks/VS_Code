//Program for illustrating Call By Value
#include<stdio.h>
//Function Prototype
void swapy(int x, int y);
//Main function
int main()
{
    int a=10,b=20;
    swapy(a,b);//Actual Parameter
    printf("a=%d,b=%d \n",a,b);
    return 0;
}
//Swap Function to alter values of x and y
void swapy(int x,int y)//Formal parameter
    {
        int temp;
        temp = x;
        x = y;
        y = temp;
        printf("x=%d,y=%d \n",x,y);
    }
       /* Output: x=20,y=10
                  a=10,b=20*/
               
//Call By Reference Code
#include<stdio.h>
//Function prototype
void swapx(int*,int*);
//main function
int main()
{
    int c =10, d=20;
    swapx(&c, &d);//Actual parameter
    printf("c=%d,d=%d \n",c,d);
    return 0;
}
//function to swap values of a and b by passing its addess
void swapx(int* j,int* k)//Formal parameter
{
    int t;
    t= *j;
    *j = *k;
    *k = t;
    printf("j=%d,k=%d \n",*j,*k);
}
/* Output: j=20,k=10
           c=20,k=10*/
//Program for illustrating Call By Value
#include<stdio.h>
//Function Prototype
void swapy(int x, int y);
//Main function
int main()
{
    int a=10,b=20;
    swapy(a,b);//Actual Parameter
    printf("a=%d,b=%d \n",a,b);
    return 0;
}
//Swap Function to alter values of x and y
void swapy(int x,int y)//Formal parameter
    {
        int temp;
        temp = x;
        x = y;
        y = temp;
        printf("x=%d,y=%d \n",x,y);
    }
       /* Output: x=20,y=10
                  a=10,b=20*/
               
//Call By Reference Code
#include<stdio.h>
//Function prototype
void swapx(int*,int*);
//main function
int main()
{
    int c =10, d=20;
    swapx(&c, &d);//Actual parameter
    printf("c=%d,d=%d \n",c,d);
    return 0;
}
//function to swap values of a and b by passing its addess
void swapx(int* j,int* k)//Formal parameter
{
    int t;
    t= *j;
    *j = *k;
    *k = t;
    printf("j=%d,k=%d \n",*j,*k);
}
/* Output: j=20,k=10
           c=20,k=10*/






