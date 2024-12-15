#include<stdio.h>
int main()
{
    int firstarry[5];
    int secondarry[5];
    int copyc=0;
    printf("enter number");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&firstarry[i]);
    }
    for(int a=0;a<5;a++)
    {
        secondarry[a]=firstarry[a];
    }
    printf("\n second element");
    for(int x=0;x<5;x++)
    {
        printf("%d",firstarry[x]);
    }
    return 0;
}