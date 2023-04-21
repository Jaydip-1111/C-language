#include<stdio.h>
void main(){
            int a[10][10],t[10][10],i,j,row,col,sum=0;
            printf("Enter row & col");
            scanf("%d %d",&row,&col);

            printf("Enter matrix");
            for(i=0;i<=row;i++){
               for(j=0;j<col;j++){
                 scanf("%d",&a[i][j]);
               }
            }
            printf("\nYour matrix \n");
            for(i=0;i<=row;i++){
                for(j=0;j<col;j++){
                    t[i][j] = a[j][i];
                    if(i+j == 2){
                        sum = sum+a[i][j];
                    }
                    printf("%d",a[i][j]);
                }
                printf("\n");
            }
            printf("\n sum of diagonal is %d",sum);
            printf("\n transnose of matrix\n");
}