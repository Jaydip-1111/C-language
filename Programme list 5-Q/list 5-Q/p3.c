// (3) enter one variable from user and perform below operation.

#include<stdio.h>
#include<conio.h>

void main(){
    int a,b=5;
    printf("Enter a:");
    scanf("%d",&a);
            
    printf("\n Addition is %d:",a+b);                 
    printf("\n Subscription is %d:",a-b);
    printf("\n Multiplication is %d:",a*b);   
    printf("\n Division is %f:",(float)a/b);   
    printf("\n Modulus is %d:",a%b);             
}