#include<stdio.h>
#include<string.h>
int main()
{
    char namearry[3][10];
    char copyarry[3][10];
    printf("enter name\n");
    for(int i=0;i<3;i++)
    {
        scanf("%s",&namearry[i]);
    }    
    printf("first element\n");
    for(int j=0;j<3;j++)
    {
       printf("\n %s",namearry[j]);
    }    
     for(int i=0;i<3;i++)
     {
        strcpy(copyarry[i],namearry[i]);
     }
     printf("second element\n");
    for(int k=0;k<3;k++)
    {
       printf("\n %s",copyarry[k]);
    }    
    
   return 0; 
}