#include<stdio.h>
int main()
{
    int i=0;
    char ch,name[50],newch;
    printf("Enter Name:- : ");
    gets(name);
    printf("\n Your name is :-");
    puts(name);
    printf("\nEnter character to be replaced :-");
    scanf("%c",&ch);
    printf("\n Enter new character to be replaced :-");
    fflush(stdin);
    scanf("%c",&newch);

    for (i = 0;name[i]!='\0'; i++)
    {
        if(name[i] == ch)
        {
            name[i] = newch;
        }
    }
    printf("\n Your updated name is :-");
    puts(name);
    
    
}