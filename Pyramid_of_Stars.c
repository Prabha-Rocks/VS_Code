// Pyramid of Stars Program
//Matrices of Star Program
#include<stdio.h>
int main(){
    int k,l;
    for(k=1;k<=2;k++)
    {
        for(l=1;l<=2;l++){
            printf("*");//Output: ****
        }
    }
//Question: Write a Program to Print Pyramid of stars by taking n no. of rows from user
int i,j,n;
printf("\nEnter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=2*n-1;j++)
    {
        if(j >= n-(i-1) && j <=n+(i-1))
        {
            printf("*");
        }
        else
            printf(" ");
    }
    printf("\n");

}
return 0;
}