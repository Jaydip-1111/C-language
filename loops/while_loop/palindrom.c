#include<stdio.h>
int main(){
            int no,rev=0,r,n;
            printf("Enter the Number:-");
            scanf("%d",&no);

            n=no;
            while (no!=0)
            {
                r=no%10;
                rev =(rev*10)+r;
                no = no/10;
            }
            if(n ==rev){
                printf("palindrom no");
            }else{
                printf("\n not palindrom no");
            }
            return 0;
}