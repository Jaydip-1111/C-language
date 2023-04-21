#include<stdio.h>
int main()
{
  int i,j,k, n=5;
  for(i=5;i>=1;i--)
  {
     for (k = i;k<n ; k++)
    {
       printf(" ");
    }
    for(j=1;j<=5;j++)
    {
      if(j<=i)
      {
        printf("%d",j);
    
      }
    }
    printf("\n");
  }
  return 0;
}      