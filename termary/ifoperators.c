#include<stdio.h>
int main(){
         int a,b,res;
         char ch;

         printf("Enter a & b-:");
         scanf("%d,%d",&a,&b);
         printf("Enter + or -:");
         fflush(stdin);
         scanf("%c",&ch);

         res=(ch=='+')?a+b:a-b;
         printf("Answer is %d",res);
}