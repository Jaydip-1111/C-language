#include <stdio.h>
int main()
{
  int n, i = 1, first = 0, sec = 1, third;
  printf("Enter the number:-");
  scanf("%d", &n);

  while (i <= n)
  {
    printf("%d\n", first);
    third = first + sec;
    first = sec;
    sec = third;
    i++;
  }
  return 0;
}