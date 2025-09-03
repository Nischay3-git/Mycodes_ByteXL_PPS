#include <stdio.h>
int main()
{
  int n1,n2;
  char ch;
  scanf("%d",&n1);
  scanf("%d",&n2);
  scanf(" %c",&ch);//
  
  printf("Entered values of\n");
  printf("n1=%d\n",n1);
  printf("n2=%d\n",n2);
  printf("Enter the Operator[+,-,*,/,%]:\n");
  printf("Entered operator=%c \n",ch);
  if(n1>=-1000000 && n1<=1000000 && n2>=-1000000 && n2<=1000000)
  {
    if(n2==0)
    {
      if(ch=='+')
      {
        printf("Addition:%d + %d = %d",n1,n2,(n1+n2));
      }
      else if(ch=='-')
      {
        printf("Subtraction:%d - %d = %d",n1,n2,(n1-n2));
      }
      else if(ch=='*')
      {
        printf("Multiplication:%d * %d = %d",n1,n2,(n1*n2));
      }
    }
    else if(n2!=0)
    {
      if(ch=='+')
      {
        printf("Addition: %d + %d = %d",n1,n2,(n1+n2));
      }
      else if(ch=='-')
      {
        printf("Subtraction: %d - %d = %d",n1,n2,(n1-n2));
      }
      else if(ch=='*')
      {
        printf("Multiplication: %d * %d = %d",n1,n2,(n1*n2));
      }
      else if(ch=='/')
      {
        printf("Division: %d / %d = %d",n1,n2,(n1/n2));
      }
      else if(ch=='%')
      {
        printf("Remainder: %d",n1,"%"," %d = %d",n1,n2,(n1%n2));
      }
    }
  }
  return 0;
}