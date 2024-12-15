#include<stdio.h>
int multiply(int num1, int num2)
{
    return num1*num2;
}
void main()
{
    int firstnum;
    int secondnum;
    int result=0;
    printf("enter number");
    scanf("%d",&firstnum);
     printf("enter number");
    scanf("%d",&secondnum);
    result=multiply(firstnum,secondnum);
    printf("multiply %d",result);
}