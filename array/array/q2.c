#include<stdio.h>
#include<conio.h>

int main(){
    int i,n,last,slast,count=0,a[50];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the inner element: \n");

    last = slast = count;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>last) 
        {
            slast = last;
            last = a[i];
        } else if(a[i] > slast && a[i] < last)
        {
            slast = a[i];
        }
    }
    printf("The second largest number is: %d",slast);
    return 0;
}