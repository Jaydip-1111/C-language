#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a & b &c");
    scanf("%d %d %d",&a,&b,&c);
    printf("\na>b && a>c --a is maximum %d",a>b && a>c);
    print1f("\na>b || a>c -- a is maximum %d",a>b || a>c);
    printf("\n !a>b -- a is maximum %d",!(a>b));

    a +=2;// a = a+2;
    printf("\n a is %d",a);
    b -=5;
    printf("\n b is %d",c);
    c *=2;
    printf("\n c is %d",c);
}