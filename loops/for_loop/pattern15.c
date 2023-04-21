#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        printf("\n");
        for (j = 1; j <= (5 - i); j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
    }
     for (i = 5; i >=2; i--)
    {
        printf("\n");
        for (j = 2; j <= (i-5); j++)
        {
            printf(" ");
        }
        for (j = 2; j <= i; j++)
        {
            printf("%d", j);
        }
    }
    return 0;
}