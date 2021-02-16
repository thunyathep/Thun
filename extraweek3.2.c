#include<stdio.h>
#include<conio.h>

int main()
{
    char name[50];
    int i;
    gets(name);
    for(i=0;;i++)
    {
        if(name[i]==' ')break;
    }
    for(i+1;;i++)
    {
        if(name[i]=='\0')break;
        else
        {
         printf("%c",name[i+1]);
        }
    }
    for(i=0;;i++)
    {
        if(name[i]==' ')break;
        else
        {
            printf("%c",name[i]);
        }
    }
    printf("\n");
}
