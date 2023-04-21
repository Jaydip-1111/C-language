#include<stdio.h>
int main(){
       int no,i=1,count=0;
       printf("Enter no:-");
       scanf("%d",&no);
       while (i<=10)
       {
        if(no%i == 0){
            count++;
        }
        i++;
       }
       if(count == 2){
        printf("prime no");
       }else{
        printf("not prime no");
       }
       return 0;
       
}