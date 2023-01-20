//How many times will "Hello World" be printed in the Following program?
#include <stdio.h>
int main(){
    int i=1024;
    for(;i;i>>=1)
        printf("Hello World \n");//Output:11
//Output of following program
int j;
for(j=0;j<20;j++){
    switch(j){
        case 0:j += 5;
        case 1:j += 2;
        case 5:j += 5;
        default:j += 4;
    }
    printf("%d ",j);//Output:16 21
    }
    // How many times will "Neso" be printed on screen
    int k=-5;
    while(k<=5){
        if(k>=0)
        break;
        else{
            k++;
            continue;
        }
        printf("Neso");//Output:0 times
    }
    //find output of following program
    int m=0;
    for(printf("\n one \n");m<3 && printf("");m++)/*m<3(0<3) is true but printf("")is 0 as it prints 
    nothing,so the loop is not executed at all*/
    {
        printf("Hi \n");
    }//Output: one
    // Find output of following program, taking size of unsigned int as 4 bytes ,Range 0 to 4294967295
    unsigned int o = 500;
    while(o++!=0);//This while loop has no body it has ended as it has ";"
    /*from 500 to 4294.. while loop executes ,after 4294.. when 0!=0 condition 
    is not satisfied it moves out of 
    loop and prints"1"output because of post increment operator i++*/
    printf("%d \n",o);//Output: 1
//Find output of following program:-
int x=3;
if(x==2);//since x!=2 we come out of the loop
x=0;//now val of x=0 as per statement
if(x==3)x++;//0!=3
else x+=2;//so x=x+2 is printed i.e x=0+2=2
printf("x=%d",x);//Output:2
return 0;
}