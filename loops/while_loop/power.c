#include <stdio.h>
int main()
{
    int n, e, ans = 1, i = 1;
    printf("Enter no:-");
    scanf("%d", &n);
    printf("Enter exponent:-");
    scanf("%d", &e);

    while (i <= e)
    {
        ans *= n;
        i++;
    }
    printf("power is %d", ans);
    return 0;
}