#include<stdio.h>
int main(){
    /*
       a=1 then check b=2 then answer will be 3 other will be return 5
    */
          int a,b;
          printf("Enter the number:-");
          scanf("%d %d",&a,&b);

          /*(a=1)?(b=2)?("answer is 3");
          <condtion>?True:False*/
              (a!=1)?printf("Zero"):(a==1 && b==2)?printf("5"):printf("0");
            
           return 0;
} 
