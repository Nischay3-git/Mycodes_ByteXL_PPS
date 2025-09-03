#include <stdio.h>
int main()
{
  int n1,n2;
  scanf("%d",&n1);
  scanf("%d",&n2);
  
  printf("Entered values are\n");
  printf("n1 = %d\n",n1);
  printf("n1 = %d\n",n2);
  if(n1>=-1000000 && n1<=1000000 && n2>=-1000000 && n2<=1000000)
  {
  if(n1>n2)
  {
  printf("n1 is greater than n2");
  }
  else if(n1<n2)
  {
    printf("n1 is less than n2");
  }
  else
  {
    printf("n1 is equal to n2");
  }
  }
  return 0;
}
