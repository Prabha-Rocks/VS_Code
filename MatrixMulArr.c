//Wap to multiply two matrices
#include<stdio.h>
#define MAX 50
int main()
{
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int i,j,k;/*here i= rows of first matrix, j= columns of second matrix,
    k= to traverse through columns of first matrix and rows of second matrix 
    simutaneously*/
    int arows,acolumns,brows,bcolumns;
    int sum=0;
    printf("Enter the rows and columns of the matrix 'a' :");
    scanf("%d %d",&arows,&acolumns);
    printf("Enter the elements of the matrix 'a':\n ");// enter ele for a matrix
    for(i=0;i<arows;i++)
    {
        for(j=0;j<acolumns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the rows and columns of the matrix 'b' :");
    scanf("%d %d",&brows,&bcolumns);
    if(arows!=bcolumns)
        printf("Sorry, the Matrix a and b cannot be multiplied");
    else
        printf("Enter the elements of the matrix 'b': \n");//enter ele for b matrix
        for(i=0;i<brows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    for(i=0;i<arows;i++)//Loops to calculate the product of 2 matrices a , b
    {
        for(j=0;j<bcolumns;j++)
        {
            for(k=0;k<brows;k++)//k < brows or acolumns any one of them 
                {
                    sum += a[i][k]*b[k][j];//to calc sum
                }
            product[i][j]=sum;//storing val of sum in product
            sum=0;//sum is again initialized to 0 
        }
    }
    printf("\nThe product of the matrix a and b is:\n");//Priting product
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumns;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
return 0; 
/*SAMPLE OUTPUT:
Enter the rows and columns of matrix 'a': 3 3
Enter elements of matrix 'a':
1 2 3
1 2 1
3 1 2
Enter the rows and columns of matrix 'b': 3 3
Enter elements of matrix 'b':
1 2 3
1 2 1
3 1 2
The product of the matrix a and b is :
12 9 11
6  7  7
10 10 14
*/



}
