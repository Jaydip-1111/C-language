#include <stdio.h>
int main()
{

    int num;
    printf("Enter the year:-");
    scanf("%d", &num);
    (num % 4 == 0 || num % 400 == 0 || num % 100 == 0) ? printf("%d is leap Year", num) : printf("%d is not leap year", num);
    return 0;
}