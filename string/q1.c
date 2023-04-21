#include<stdio.h>
#include<string.h>
int main(){
            char str[50];
            int i,len;
            int flag=0;

            printf("Enter String:-");
            scanf("%s",str);

           len = strlen(str);

           for(i=1; i< len; i++)
           {
             if(str[i] != str[len-i-1])
             {
                flag = 1;
                break;
             }
           }
           if (flag){
              printf("%s is not a palindrome",str);
           }
           else{
                printf("%s is palindrome",str);
           }
           
}