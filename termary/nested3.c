#include<stdio.h>
int main(){
            int a,b,c;

            printf("Entar a & b & c:-");
            scanf("%d %d %d",&a,&b,&c);

            (a>b && a>c)?printf("a-%d is maximum",a):(b>c)?printf("b-%d is maximum",b):printf("c-%d is maximum",c);
}