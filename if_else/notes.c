#include <stdio.h> 
int  a[8]={500,100,50,20,10,5,2,1};
 
void denomination(int m);
int main() 
{
 
     int m;
 
    printf("Enter the amount:");
 
    scanf("%d",&m);
     
    
 
   denomination(m);
return 0;
}
void denomination(int m)
{
	int temp,i;
 temp=m;
     for(i=0;i<8;i++)
    {
     printf("\n%d notes is:%d",a[i],temp/a[i]);
     temp=temp%a[i];
     	
    } 
}