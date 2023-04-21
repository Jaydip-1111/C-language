#include<stdio.h>
void main(){
               int a,b,ch;
               do{
                   printf("\n1.Add\n2.Sub\n3.Exit");
                   printf("Enter Your choice");
                   scanf("%d",&ch);
                   printf("\nEnter a & b");
                   scanf("%d,%d",&a,&b);

                   switch (ch)
                   {
                   case 1: printf("Addition is %d\n",a+b);
                           break;

                    case 2: printf("Subtraction is %d\n",a-b);
                            break;
                   default:
                            break;
                   }
               }while (ch!=3);
               {
                printf("\n ----Thank You----");
               }
               
}