#include<stdio.h>
int  main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    printf("my age is\n %d",age);
  if(age<7)
  {
    printf("\ni am child");
  }
  else if (age<20) 
  {
    printf("\ni am student");
  }
  else
  {
    printf("\ni am young");
  }

    return 0;
}
