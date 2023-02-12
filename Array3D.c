//WAP to access the elements of 3D array
#include<stdio.h>
int main()
{
    int i,j,k,m,n,o;
    int a[20][30][30];//taking m for a[i], n for a[j] , k for a[k]
    printf("Enter Array num: ");
    scanf("%d",&m);
    printf("Enter Array Rows: ");
    scanf("%d",&n);
    printf("Enter Array Column: ");
    scanf("%d",&o);
    for(i=0;i<m;i++)//To take input of array a[i][j][k],here i=arr(num),j=row,k=column
        {
           for(j=0;j<n;j++)
            {
                for(k=0;k<o;k++)
                {
                    scanf("%d",&a[i][j][k]);
                }
            }
        }
    printf("The Reqd 3D array: ");
    for(i=0;i<m;i++)//To print array a[i][j][k]
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<o;k++)
                {
                    printf("%d ",a[i][j][k]);
                }
            }
        }
   
    return 0;
}