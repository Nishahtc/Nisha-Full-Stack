#include<stdio.h>
int main()
{
    int number;
    printf("enter the term of number");
    scanf("%d",&number);
    int firstnum =0,secondnum=1;
    int nextvalue=firstnum+secondnum;

    printf(" %d \t %d \t",firstnum+secondnum);
    for(int i=3;i<=number;i++)
    {
        firstnum=secondnum;
        secondnum=nextvalue;
        nextvalue=firstnum+secondnum;
    }
    
    return 0;
}