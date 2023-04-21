#include <stdio.h>
int main()
{
  int n, r, ans = 0, f;
  printf("Enter no:-");
  scanf("%d", n);
  f = n;
  while (n != 0)
  {
    r = n % 10;
    ans = ans + (r * r * r);
    n = n / 10;
  }
  printf("no is %d\n", ans);
  if (f == ans)
  {
    printf("Armstrong no");
  }
  else
  {
    printf("not Armstrong no");
  }
}
