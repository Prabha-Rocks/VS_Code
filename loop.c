//Write a program which allows user to enter an integer until he/she enters a value zero
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n); 
    //while loop until user enters zero
    while(n!=0)
    {
        printf("Enter a Number: ");
        scanf("%d",&n); 

    }
    //do-while loop until user enters 0
    do{
        printf("enter a number:");
        scanf("%d",&n);
    }while(n!=0);
    printf("Out of Loop \n");
    //Switch case
    int x=2;
    switch(x){
        case 1:printf("val of x ix 1");
        break;
        case 2:printf("val of x is 2 \n");//Output: val of x is 2
        break;
        case 3:printf("val of x is 3");
        break;
        default:printf("val of x is unknown");
        break;
    }
    //MCQ Ques
    unsigned int var =10;
    printf(" %d \n",~var);//Output: -11
    //WAP to allow user to enter integers until he/she enters a -ve no. or 0
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    while(i!=0)
    {
        if(i<0)
        break;
        printf("Enter a number:");
        scanf("%d",&i);
    }
    printf("Out of loop \n");
    //Continue statement
    // WAP to print all odd numbers from 1 to 20
    int j,m=2;
    for(j=1;j<=20;j++){
        if(j==m)
        {
            m=m+2;
            continue;
        }
printf("All odd nos. between 1 to 20:");
printf("%d \n",j);//Output:all odd numbers from 1 to 20 will be printed
} return 0;
}