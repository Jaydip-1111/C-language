#include<stdio.h>
int main(){
            int num,sum=0,first,last;
            printf("Enter any number find sum of first and last digit:-");
            scanf("%d",&num);

            last = num % 10;
            first = num;

            while (num >=10)
            {
                num = num / 10;
            }
            first = num;

            sum = first + last;
            printf("sum of first and last digit = %d",sum);
            
}