#include<stdio.h>
int main(){
            int num,r,count=0;
            printf("Enter Any number:-\n");
            scanf("%d",&num);

            while (num>0)
            {
                num = num / 10;
                count = count + 1;
            }
            printf("\n total digit in a given number = %d",count);
            
}