#include <stdio.h>
int main()
{
    int no,i=1,f=0,s=1,t;
    printf("Enter no:-");
    scanf("%d",&no);
    while(i<=10){
        printf("%d\n",f);
        t=f+s;
        f=s;
        s=t;
        i++;
    }
    return 0;
    
}