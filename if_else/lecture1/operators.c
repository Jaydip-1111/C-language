#include<stdio.h>
void main(){
     int a, b, c;
      char chr;
    
     int sum1 = 85 + 96;
     int sub = 89 - 45;
     int mul = 15 * 20;
     int div = 90 / 15;
     int mod = 75 % 15;
     printf("Enter value for variable A = \t");
     scanf("%d", &a);
     printf("Enter value for variable B = \t");
     scanf("%d", &b);
     c = a * b;
     printf("\nSum of %d + %d = %d\t",a,b,c);
     printf("%d\n",sum1);
     printf("%d\n",sub);
     printf("%d\n",mul);
     printf("%d\n",div);
     printf("%d\n",mod);
}