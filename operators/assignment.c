#include<stdio.h>
int main(){
      int a,b,c;
      printf("Enter a & b &c:");
      scanf("%d %d %d", &a,&b,&c);
      printf("\n a>b && a>c - - a is maximum %d",a>b && a>c);
      printf("\na>b || a>c - - a is maximum %d",a>b||a>c);
      printf("\na>b -- a is maximum %d",!(a>b));
      return 0;
}