#include<stdio.h>
void main(){
           char ch;

           printf("Enter of the day:-");
           scanf("%c",&ch);
           
           switch (ch)
           {
           case 'm':
           case 'M':
               printf("Monday \n");
            break;
            case 't':
            case 'T':
              printf("Tusday \n");
            break;
            case 'w':
            case 'W':
                printf("wednesday");
            break;
            case 'h':
            case 'H':
                printf("Thersday");
            break;
            case 'f':
            case 'F':
                printf("friday");
            break;
            case 's':
            case 'S':
                printf("saturday");
            break;
            case 'u':
            case 'U':
               printf("sunday");
           default:
             printf("Invalid day");
            break;
           }
}