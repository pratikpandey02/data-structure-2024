#include<stdio.h>
int main()
{
 int r1,c1;// no. of rows nd columns.
 printf("Inout the no. of rows in the matrix =");
 scanf("%d",&r1);

    printf("Input the no. of colums in the matrix =");
    scanf("%d",&c1);
    int i,j;
    int ar[r1][c1];

    for(i =0;i<r1; i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("input elements[%d][%d]=",i,j);
            scanf("%d",&ar[i][j]);
        }
    } 
        printf("\n>>> matrix form of array <<<\n");
        for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",ar[i][j]); 
        }
        printf("\n");
    }
    printf("\n >>> Transpose of the matrix <<<\n");

    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            printf("%d\t",ar[j][i]); 
        }
        printf("\n");
    }
    return 0;
}