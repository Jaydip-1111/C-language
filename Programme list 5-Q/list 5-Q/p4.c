// (4) find below operation using value

#include <stdio.h>
#include <conio.h>

void main()
{
    int a=100, b=100 , Result;
    float c=10.5, d=100.5 , Ans;

    Result = ++a;
    printf("\n Result is %d", Result);

    Result = --b;
    printf("\n Result is %d", Result);

    Ans = ++c;
    printf("\n Ans is %f", Ans);

    Ans = --d;
    printf("\n Ans is %f", Ans);
}