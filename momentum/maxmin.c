#include <stdio.h>
#include <conio.h>
int main()
{
     int a, b, c, d;
     printf("Enter any 4 value: \n");
     scanf("%d %d %d %d", &a, &b, &c, &d);

     if (a > b && a > c && a > d)
     {
          printf("\n A = %d is maximum", a);
     }
     else
     {
          if (b > c && b > d)
          {
               printf("\n B = %d is maximum", b);
          }
          else
          {
               if (c > d)
               {
                    printf("\n C = %d is maximum", c);
               }
               else
               {
                    printf("\n D = %d is maximum", d);
               }
          }
     }
     return 0;
}