/*WAP to print row sum and column sum for the given 5x5 matrix
8 3 9 0 10
3 5 17 1 1 
2 8 6 23 1 
15 7 3 2 9
6 14 2 6 0
OUTPUT:
Row sum: 30 27 40 36 28
Col sum: 34 37 37 32 21*/
#include <stdio.h>
int main()
{
    int i,j,sum=0;//i=row,j=column
    int arr[5][5]={{8,3,9,0,10},
                   {3,5,17,1,1},
                   {2,8,6,23,1},
                   {15,7,3,2,9},
                   {6,14,2,6,0}};
    printf("Row sum: ");
    for(i=0;i<5;i++)//outer loop is i here to keep it constant so that row sum is printed
    {
        for(j=0;j<5;j++)
        {
            sum+=arr[i][j];
        }
        printf("%d ",sum);
        sum=0;//so that the older val of sum is not retained after printing
    }
    printf("\n");
    printf("Column sum: ");
    for(j=0;j<5;j++)//outer loop is j here to keep it constant so that col sum is printed
    {
        for(i=0;i<5;i++)
        {
            sum+=arr[i][j];
        }
        printf("%d ",sum);
        sum=0;//so that the older val of sum is not retained after printing
    }
    return 0;
}