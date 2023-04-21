#include <stdio.h>
int main()
{
    int pattern_type, no_line, num = 0;
    int i = 0, j = 0;
    printf("\nPlease Select pattern type:-");
    scanf("%d", &pattern_type);
    printf("\nPlease Select number of line:-");
    scanf("%d", &no_line);
    if (pattern_type == 1)
    {
        printf("\nYour selected pattern type is [ ODD ]");
        num = 1;
    }
    else
    {
        printf("\nYour selected pattern type is [ EVEN ]");
        num = 2;
    }
    for (i = 1; i <= no_line; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            // if (pattern_type != 1)
            // {
            //    if (num % 2 == 0)
            //     {
                   
            //     }
            // }
             num = num + 2;
            printf(" %d ", num);
        }
    }
}