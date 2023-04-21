#include<stdio.h>
#include<string.h>
int main(){
              char name[50],name2[50];

              printf("Enter Name:-");
              gets(name);

              printf("enter name:-");
              puts(name);

              printf("\n String length is %d",strlen(name));
              printf("\n String lowercase is %s",strlwr(name));
              printf("\n String uppercase is %s",strupr(name));
              printf("\n String reverse is %s",strrev(name));

}