#include <stdio.h>
#include <conio.h>

int main(){
    int i,n,arr[50];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the element of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}