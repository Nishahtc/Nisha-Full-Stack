#include<stdio.h>
int add(int num1,int num2)
{
   return num1+num2;
}
void main()
{
    int firstnum;
    int secondnum;
    int result=0;
   printf("enter firstnumber");
   scanf("%d",&firstnum);
   printf("enter secondnumber");
   scanf("%d",&secondnum);
   result=add( firstnum,secondnum);
    printf("sum of two numbers %d",result);


}