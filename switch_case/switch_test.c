#include <stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    int a, b;

    while (1)
    {
        printf("\nEnter First Value : \t");
        scanf("%d", &a);
        printf("\nEnter Second Value: \t");
        scanf("%d", &b);

        printf("\nEnter a choice(+,-,*,/): \t");
        scanf(" %c", &c);
        printf("Selected OP Code %c", c);
        switch (c)
        {
        case '+':
            printf("\nSum of %d + %d = %d", a, b, (a + b));
            break;
        case '-':
            printf("\nSubstraction of %d - %d = %d", a, b, (a - b));
            break;
        case '*':
            printf("\nMultiplication of %d * %d = %d", a, b, (a * b));
            break;
        case '/':
            printf("\nDivision of %d / %d = %d", a, b, (a / b));
            break;
        default:
            printf("Enter valid operation(+,-,*,/)");
          
            break;
            
        }
    }
    return 0;
}