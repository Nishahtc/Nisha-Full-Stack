#include<stdio.h>
int main()
{
    int hindi,eng,math;
    int percentage=0;
    printf("enter hindi marks");
    scanf("%d",&hindi);
    printf("enter english marks");
    scanf("%d",&eng);
    printf("enter maths marks");
    scanf("%d",&math);

    
    if((hindi<=100&&hindi>=0 )&&(eng<=100&&eng>=0 )&&(math<=100&&math>=0)) 

 {  percentage=(hindi+eng+math)* 100/300; 
      printf("result:");
    
  if(percentage>60)
    {
       printf("first");
    }
     else if(percentage<60&percentage>40)
    {
       printf("second");
    }
     else if(percentage<=30)
    {
       printf("third");
    }
    else
    {
        printf("enter correct marks,marks should be <100");
    } 
}  
  return 0;
}
