#include<stdio.h>
int main()
{
  int i,j,k,n=5;
  for(i=1;i<=5;i++)
  {
     for(k=i; k<n; k++)
     {
        printf(" ");
     }
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