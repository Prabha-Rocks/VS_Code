/* Vid:10 Prac SET Ques (1)
Q1)*/
#include<stdio.h>
int main(){
    printf("%d \n",printf("%s","Hello World!\n"));
/*Output:Hello World!
         13*/
//Q2)
printf("%s","Hello\n");
printf("%10s","Hello \n");//10 means Output:"5 spaces"Hello
//Q3)
char c=255;//1 char=1byte=8bits
c=c+10;//2^8(256)+10
printf("%d",c);// Output :9 (265 mod 256 =9)
//Q4)
unsigned i=1;
int j=-4;
printf("%u",i+j);// Output :varies from machine to machine ,here int is 4bytes,so output is 94294967293
return 0;
}