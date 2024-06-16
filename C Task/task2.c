#include<stdio.h>
int main()
{
    int table;
    printf("enter any number");
    scanf("%d",&table);
    for(int x=1;x<=10;x++)
    {
        printf("%d*%d=%d",table,x,table*x);
    }
    return 0;
}