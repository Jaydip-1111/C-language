#include<stdio.h>
int main()
{
  int i,j,k;
 
  for(i=1;i<=5;i++)
  {
    k = 5;
    printf("\n");
    for(j=1;j<=i;j++)
    {
      printf("%d ",k);
      k--;
    }
    
  }
  return 0;
}      