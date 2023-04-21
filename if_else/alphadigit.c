/*
Name        :
Description : 
Author      :
Date        :
=============================================
Change History
=============================================
Revison numner : <MOD-001>
Change detail  : If con cha
Author         :
Date           :
*/
#include<stdio.h>
int main(){
            char no;
            printf("Enter no:-");
            scanf("%c",&no);
            if(no >='a' && no <='z' || no >='A' && no <='Z'){ // Jaydip MOD-001
            printf("no is alphebetic");
           }else if(no >='0' && no <='9'){
            printf("no is digit");
           }else{
            printf("no is special char");
           }
}