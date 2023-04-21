#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    printf("\n");
    for(j=1;j<=5;j++)
         
    {
      printf(" ");
    }
    for(j=5;j>=i;j--)
    {
      printf("%d ",j);
    }
  }
  return 0;
}