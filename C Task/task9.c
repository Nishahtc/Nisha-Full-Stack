#include<stdio.h>
int sub(int num1,int num2 )
{
    return num1-num2;
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
    result=sub(firstnum,secondnum);
    printf("subtraction of two numbers %d",result);
    

    

}