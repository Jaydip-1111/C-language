#include<stdio.h>
#include<string.h>
int main(){
            char name[100],name2[100],ans;
            printf("Enter name:-");
            gets(name);

            printf("\nYour name is:-");
            puts(name);

            printf("Enter name2:-");
            gets(name2);

            printf("Enter name2:-");
            puts(name2);

            printf("\n string length is %d",strlen(name));
            printf("\n string lowercase is %s",strlwr(name));
            printf("\n string uppercase is %s",strupr(name));
             printf("\n string reverse is %s",strrev(name));
            
            strcpy(name2,name);
            printf("\n copy String is %s",name2);

            strcat(name,name2);
            printf("\n merge String is %s",name);

            ans = strcmp(name,name2);
            printf("\n answer is %d\n",ans);
            if(ans == 0)
            {
                printf("string are equal");
            }else
            {
                printf("strings are not equal");
            }
            return 0;
}