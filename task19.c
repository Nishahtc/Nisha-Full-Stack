#include<stdio.h>
int main()
{
    int arry[5];
    int multiply=1;
    printf("\nenter number");
    for(int i=1;i<=5;i++)
    {
        scanf("\n %d",& arry[i]);
    }

      printf("\n original number");
    for(int k=1;k<=5;k++)
    {
        printf("\n %d",arry[k]);
    }
    for(int s=1;s<=5;s++)
    {
        multiply*=arry[s];
    }
    printf("multiply of total number %d",multiply);

    return 0;
}