#include <stdio.h>

int main() {

  int n, res = 0, r;

  printf("Enter an integer:- ");
  scanf("%d", &n);

  while (n != 0) {
    r = n % 10;
    res = res * 10 + r;
    n /= 10;
  }

  printf("Reversed number = %d", res);

  return 0;
}