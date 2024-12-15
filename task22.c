#include<stdio.h>
int main()
{
    printf("odd numbers 1 to 100 \n");
    for(int i=1;i<=100;i++)
    {
       if(i % 2!=0)
       {
          printf("%d \n",i);
       }
    }
    return 0;
}