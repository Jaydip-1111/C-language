#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the four value:-");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > b)
    {
        printf("\na %d is maximum", a);
    }
    else if (b > c && b > d)
    {
        printf("\nb %d is maximum", b);
    }
    else if (c > b && c > d)
    {
        printf("\nc %d is maximum", c);
    }
    else
    {
        printf("\nd %d is maximum", d);
    }
}