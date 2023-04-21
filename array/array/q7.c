#include <stdio.h>
#include <conio.h>

int main(){
    int a[50][50],b[50][50],r,c,i,j;
    printf("Enter the row and column: ");
    scanf("%d %d",&r,&c);

    printf("Enter the inner element of the matrix: \n\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    printf("Matrix is: \n\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    printf("Transpose Matrix: \n\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}