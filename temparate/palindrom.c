#include<stdio.h>
int main(){
            int no,rev=0,r,n;
            printf("Enter Any number:-");
            scanf("%d",&no);
            n=no;
            while (no!=0)
            {
                r=no%10;
                rev = (rev*10) + r;
                no = no/10;
            }
            printf("\nReverse no is %d",rev);
            if(n==rev){
                printf("\npalindrom no");
            }else{
                printf("\n not palindrom");
            }
            return 0;
}