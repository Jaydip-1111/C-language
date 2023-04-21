#include<stdio.h>
#define pi 3.14
void main(){
        //  const int a=10;
        //  printf("value of a is %d\n",a);

        float r,area;
        printf("enter radious:");
        scanf("%f",&r);
        area = pi * r * r;
        printf("Area of circle is %.2f",area);
}