#include<stdio.h>
int main(){
            int num,i=1;
            printf("Enter Any Number:-");
            scanf("%d",&num);
            printf("\n Multiplication Table is %d: \n",num);
            do{
                printf("\n %d * %d = %d", num,i,num*i);
                i++;
            }while (i<=10);
         
            
}