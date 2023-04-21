#include<stdio.h>
int main(){
            int a,b,c;
            printf("Enter the three number:-");
            scanf("%d%d%d",&a,&b,&c);
            printf("\na => %d",a);
            printf("\nb => %d",b);
            printf("\nc => %d",c);
            if(a>b){
                 printf("\na = %d is maximum",a);
            }
            else if(b>c){
                 printf("\nb = %d is maximum",b);
             }
             else{
                  printf("\nc = %d is maximum",c);
             }
          
}