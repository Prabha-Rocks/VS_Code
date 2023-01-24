//Q1)Output of the following code is
#include<stdio.h>
int main(){
    int var = 0x43FF;//0x before constant is used to denote hexadecimal
    printf("%x\n",var);//output: 43ff
    //Find output of the following code 
    int i=5;
    int a=sizeof(i++);
    printf("%d  %d\n",i,a);//output: 5  4(sizeof int)
    int b=1,c=1;
    int d =++b||c++;/*c++ will not be evaluated because in OR operator if
     ++a is True whole statement is considered to be true,d=1 (true)*/
    int e =c-- && --b;
    printf("%d %d %d %d\n",e,d,c,b);//output: 1101
    //find output of following code
    unsigned int j=10;
    printf("%d",~j);//output:-11
    /*j = 10 ,binary- 0000 0000 1010
    for ~j ,we find -ve val of j (1's complement)1 111 1111 0101
    Computer stores 2's comple ment of -ve value:
    So, 1's complement= 1 000 0000 1010
     1's complement+1= 1 000 0000 1011= -11 output */
    return 0;
}