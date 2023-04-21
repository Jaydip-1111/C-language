#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50][50], b[50][50], r, c, i, j, sum = 0;
    printf("Enter the row and column: ");
    scanf("%d %d", &r, &c);

    printf("Enter the inner element of the matrix: \n\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Matrix is: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of Diognal element is: \n\n");
    printf("%d", sum);
}