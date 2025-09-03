
#include<stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  printf("Entered values are");
  printf("\na=%d",a);
  printf("\nb=%d",b);
  printf("\nc=%d",c);
  printf("\nd=%d",d);
  
  
  printf("\n\nCondition 1:");
  if(a>b)
  {
    printf("\na=%d is greater than b=%d",a,b);
  }
  else
  {
  printf("\na=%d is not greater than b=%d",a,b);
  } 
  
  printf("\n\nCondition 2:");
  if(c>=d)
  {
    printf("\nc=%d is greater than or equal to d=%d",c,d);
  }
  else
  {
    printf("\nc=%d is not greater than or equal to d=%d",c,d);
  }
    
  printf("\n\nCondition 3:");
  if(a>b)
  {
    printf("\na=%d is greater than b=%d",a,b);
  }
  else
  {
  printf("\na=%d is not greater than b=%d",a,b);
  }
  
  printf("\n\nCondition 4:");
  if(c<=d)
  {
    printf("\nc=%d is less than or equal to d=%d",c,d);
  }
  else
  {
  printf("\nc=%d is not less than or equal to d=%d",c,d);
  }
  
  printf("\n\nCondition 5:");
  if(a!=b)
  {
    printf("\na=%d and b=%d are not equal",a,b);
  }
  else
  {
  printf("\na=%d and b=%d are equal",a,b);
  }
  
  printf("\n\nCondition 6:");
  if(c==d)
  {
    printf("\nc=%d is equal to d=%d",c,d);
  }
  else
  {
    printf("\nc=%d is not equal to d=%d",c,d);
  }
  return 0;
}