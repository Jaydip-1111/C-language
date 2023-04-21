#include <stdio.h>
void main()
{
     int a, b, c;
     char chr, is_valid_operation;
     is_valid_operation = '1';
     printf("Enter value for variable A = \t");
     scanf("%d", &a);
     printf("Enter value for variable B = \t");
     scanf("%d", &b);
     printf("Enter an operation (+ , -, *, /) : \t");
     scanf(" %c", &chr);
     switch (chr)
     {
     case '+':
          c = a + b;
          break;
     case '-':
          c = a - b;
          break;
     case '*':
          c = a * b;
          break;
     case '/':
          c = a / b;
          break;
     default:
          printf("Kidnly select valid operation(+, -, *, /)");
          is_valid_operation = '0';
          break;
     }
     if (is_valid_operation == '1')
     {
          printf("\nYour selected operation = \t %c", chr);
          printf("\nResult => %d %c %d = %d\t", a, chr, b, c);
     }
}