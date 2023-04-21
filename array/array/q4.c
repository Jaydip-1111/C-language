#include<stdio.h>
#include<conio.h>

int main(){
    int a[100],n,i,j,elem,pos,temp=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position: ");
    scanf("%d",&pos);
    printf("Enter the element: ");
    scanf("%d",&elem);
    for(i=n;i>pos;i--)
    {
        a[i] = a[i-1];
    }

    a[pos] = elem;
    n++;
    printf("\n After insert the element: ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}