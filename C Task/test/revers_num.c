#include<stdio.h>
int main()
{
    int num;
    int revers =0;
    printf("enter number");
    scanf("%d",&num);
    while (num>0)
    {
        revers=revers*10+num%10;
        
        num=num/10;
    }
    printf("%d",revers);
    return 0;
}