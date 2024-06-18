#include<stdio.h>
int main()
{
    int copya=0;
    int num[8]={50,33,40,90,20,100,55,109};
    for(int i=0;i<8;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n ****************\n");
    for(int x=0;x<8;x++)
    {
        for(int y=1+x;y<8;y++)
        {
            if(num[x]>num[y])
            {
               copya=num[x];
               num[x]=num[y];
               num[y]=copya;
            }
        }  
    }
    printf("accending number ");
    for(int s=0;s<8;s++)
    {
        printf("\t %d",num[s]);
    }
    

    return 0;
    
}