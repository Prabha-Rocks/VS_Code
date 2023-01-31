/*Floyd's Triangle is a right angled triangle array of natural numbers ,Eg of Floyds triangle 
for 5 rows
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */
#include <stdio.h>
int main()
{
    int n=1,i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    //for loop which runs from 1 to number of rows
    for(i=1;i<=rows;i++)
    {
    //loop which runs from 1 to number of row number'i'
        for(j=1;j<=i;j++)
        {
            printf("%d ",n);// similarly to print '*' put * instead of %d
            n++;
        }
        printf("\n");
    }
    return 0;
}