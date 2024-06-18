#include<stdio.h>
int main()
{
    int arr[5];
    int sum= 0;
    printf("enter number");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\n original number");
    for(int k=0;k<5;k++)
    {
        printf("\n %d",arr[k]);
    }
    for(int x=0;x<5;x++)
    {
        sum +=arr [x];
    }
   printf("sum of total number %d",sum);

    return 0;
}