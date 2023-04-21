#include<stdio.h>
int main()
{
  int i,j,k,n = 5,m;
  m = n;
  for(i=1;i<=n;i++)
  { 
     if(i==1)
     {
        m = n;
     }
     for(k = m; k<n; k++)
     {
          printf("  ");
    }
      m = m - 1;
    
    for(j=i;j<=n;j++)
    {
      if(j<=i+k)
      {
         printf("%d ",j);
          
      }
    }
    printf("\n");
  }
  return 0;
}   