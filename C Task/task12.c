#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    char count=0;
    printf("enter name \n");
    scanf("%s",&name);
    for(int x= strlen(name); x>=0; x--)
    {
       printf("%c",name[x]);
    }
    return 0;
}