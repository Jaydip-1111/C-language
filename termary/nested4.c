#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("Entar a & b & c & d:-");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    /*
    (a > b && a > d && a > c) ? printf("a-%d is maximum", a) : (c > d) ? printf("c-%d is maximum", c)
                                                                       : printf("d-%d is maximum", d);
                                                                       */
    (a > b && a > d && a > c)   ? printf("Value of [ A = %d ] is Maximum", a)
    : (b > a && b > d && b > c) ? printf("Value of [ B = %d ] is Maximum", b)
    : (c > a && c > d && c > b) ? printf("Value of [ C = %d ] is Maximum", c)
                                : printf("Value of [ D = %d ] is Maximum", d);
    return 0;
}