#include<stdio.h>
int main(){
               char ch;
               printf("Enter your choice\n");
               scanf("%c",&ch);

               switch (ch){
               case 'a':
               case 'e':
               case 'i':
               case 'u':
               case 'o':printf("vowel");
                     break;

               default:
                     printf("\nConsonant");
                break;
               }
}