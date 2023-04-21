#include <stdio.h>
int main()
{
  int age;
  printf("enter the Age:-");
  scanf("%d", &age);
  if (age >= 18)
  {
    printf("you are Eligible for vote");
  }
  else
  {
    printf("you are not Eligible for vote");
  }
}