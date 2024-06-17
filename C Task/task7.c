#include<stdio.h>
int main()
{
    int numarry[5];
    printf("enter number");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&numarry[i]);
    }
    int max=numarry[0];
    int min=numarry[0];
    for(int x=0;x<5;x++)
    {
       if(numarry[x]>max)
       {
          max=numarry[x];

       }
       

       if(numarry[x]<min)
       {
          min=numarry[x];

       }
      

    }
    
    printf("\n  total elments");
    for(int j=0;j<5;j++)
    {
        printf("%d",numarry[j]);
    }

    printf("\n max number is %d ",max);
    printf("\n min number is %d ",min);
    

      
    
    return 0;
}