// (2) check maximum of 3 variables p,q,r and output will be stored in “result” variable.

#include<stdio.h>
#include<conio.h>

void main(){
    int a,b,c,result;

    printf("Enter a & b & c :");
    scanf("%d %d %d",&a ,&b, &c);

    (a>b && a>c)?printf("result : a =%d",a):(b>c)?printf("result : b =%d",b):printf("result : c =%d",c);

}