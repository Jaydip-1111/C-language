#include<stdio.h>
int main(){
            int no,r,p;
            printf("Enter Any number:-");
            scanf("%d",&no);

            for (p = 1; no>0; no=no/10)
            {
               r=no%10;
               p=p*r;
            }
            printf("\nthe product number is =%d",p);
            return 0;
            
}