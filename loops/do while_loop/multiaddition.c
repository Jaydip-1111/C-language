#include<stdio.h>
#include<stdlib.h>
int main(){
            int a,b,c,ch;
            do{
            printf("1.Addition\n");
            printf("2.Subtraction\n");
            printf("3.multiplication\n");
            printf("4.division\n");
            printf("Enter your choice:-\n");
            scanf("%d",&ch);
            printf("\nEnter a & b:-");
            scanf("%d %d",&a,&b);
             switch (ch)
            {
            case 1: c=a+b;
                    printf("Addition is %d\n",c);
                break;
            case 2: c=a-b;
                    printf("Subtraction is %d\n",c);
                break;
            case 3: c=a*b;
                    printf("Multiplication is %d\n",c);
                break; 
            case 4: c=a/b;
                    printf("division is %d\n",c);
                break;     

               default:
                   printf("\nInvalid choice");
                   exit(0);
                break;
                
            }
        }
            while(0);
}