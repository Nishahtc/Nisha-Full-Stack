#include<stdio.h>
#include<string.h>
int main()
{
    char name[5];
  int  length =0;
    printf("enter name");
    
    
        scanf("%s",&name);
    
    for(int i=0;i<5;i++)
    {
        length+=strlen(name[i]);
    }
    printf("My name length strlen =%d\n",length);
    return 0;
}