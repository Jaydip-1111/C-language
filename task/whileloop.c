#include<stdio.h>
int main(){
            int i=1,j=1;
            i=1;
            while (i<=5)
            {
              i++;
              j=1;
              printf("\n");
              while (j<=i)
              {
                printf("%d",j);
                
                j++; 
              }  
            }
            
}