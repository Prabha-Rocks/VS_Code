//WAP to access the elements of 2D array
#include<stdio.h>
int main()
{
    int i,m,j,n;
    int a[20][30];//taking m for a[i] and n for a[j]
    printf("Enter Array Length1: ");
    scanf("%d",&m);
    printf("Enter Array Length2: ");
    scanf("%d",&n);
    for(i=0;i<m;i++)//To take input of array a[i][j] 
        {
           for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    printf("The Reqd 2D array: ");
    for(i=0;i<m;i++)//To print array a[i][j]
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
   
    return 0;
}