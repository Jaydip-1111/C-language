#include <stdio.h> 
int main()
{
int var1, var2, temp; 
printf("Enter two value:-");
scanf("%d%d", &var1, &var2);
printf("Before SwappingnFirst variable = %dnSecond variable = %dn\n", var1, var2);
temp = var1;
var1 = var2;
var2 = temp;
printf("After SwappingnFirst variable = %dnSecond variable = %dn\n", var1, var2);
return 0;
}