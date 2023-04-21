#include<stdio.h>
int main(){
           int no;
           printf("enter no:-");
           scanf("%d",&no);
           if(no<0){
               printf("no is negative");
           }else if(no >0){
               printf("no is positive");
           }else{
            printf("no is zero");
           }
           return 0;
}
