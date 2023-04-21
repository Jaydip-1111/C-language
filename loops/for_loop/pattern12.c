#include<stdio.h>
int main()
{
  int i,j;
  for(i=5;i>=1;i--)
  {
    printf("\n");
    for(j=i;j<=5;j++)
    {
      printf("%d ",i);
    }
  }
  return 0;
}